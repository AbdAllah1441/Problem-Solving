var lengthOfLastWord = function(s) {
    let x = s.length - 1
    let c = 0; 
    for (let i = x; i > -1 ; i--) {
        if (s[i] === " ")
            x--;
        else {
            for (let i = x; i > -1 ; i--) {
                if (s[i] !== " ")
                    c++;
                else
                    break;
            }
            break;
        }
    }
    return c;
};
