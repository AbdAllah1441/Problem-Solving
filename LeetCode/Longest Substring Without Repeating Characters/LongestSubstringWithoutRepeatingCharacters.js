/**
 * @param {string} s
 * @return {number}
 */
var lengthOfLongestSubstring = function(s) {
    let str = '';
    let max = 0;
    for (let i = 0, j = 0; i < s.length && j < s.length; i++) {
        if (str.includes(s[i])) {
            i = j;
            j++;
            if (str.length > max)
                max = str.length;
            str = "";
        } else {
            str += s[i];
        }    
    }
    if (str !== '') {
       max =  str.length > max ? str.length : max;
    }
    return max;
};
