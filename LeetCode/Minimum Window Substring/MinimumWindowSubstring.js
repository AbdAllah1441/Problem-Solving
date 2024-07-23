/**
 * @param {string} s
 * @param {string} t
 * @return {string}
 */
function countOccurrences(array, element) {
    let count = 0;
    for (let i = 0; i < array.length; i++) {
        if (array[i] === element) {
            count++;
        }
    }
    return count;
}

var minWindow = function(s, t) {
    const charCountT = {};
    for (const char of t) {
        charCountT[char] = (charCountT[char] || 0) + 1;
    }
    // array of stacks of chars
    let allStrings = [];
    // array of stacks of indices
    let allIndices = [];

    for (let i = 0; i < s.length; i++) {
        for (let k = 0; k < t.length; k++) {
            // if you find a char
            if (s[i] === t[k]) {
                // make a new stack
                allStrings.push([]);
                allIndices.push([]);

                for (let j = 0; j < allStrings.length; j++) {
                    // checking to not push the same char 
                    // && taking exactly the right number of repeated chars depending on t
                    if (allIndices[j].includes(i))
                        break;
                    if (countOccurrences(allStrings[j], s[i]) < countOccurrences(t, s[i])) {
                        //push the char to the stack
                        allStrings[j].push(s[i]);
                        // push the index to the other stack
                        allIndices[j].push(i);
                    }
                }
            }
        }
    }

    // remove stacks which doesn't contain all letters
    let indices = allIndices.filter((i) => {
        return i.length === t.length
    });
        
    // check if there is no substring
    if (indices.length === 0){
        return "";
    }

    // choose the stack which gives smallest substring
    let min = indices[0];
    for (let i = 1; i < indices.length; i++) {
        if ( (indices[i][indices[i].length-1] - indices[i][0]) < (min[min.length-1] - min[0]) )
            min = indices[i];
    }

    return s.slice(min[0], min[min.length-1]+1);
};
