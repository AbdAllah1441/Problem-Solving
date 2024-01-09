var isSubsequence = function(s, t) {
    let m = 0;
    let n = 0;
    for (let i = 0; i < s.length; i++) {
        for (let j = n; j < t.length; j++) {
            if (s[i] === t[j]) {
                m++;
                n = j + 1;
                break;
            }
        }
    }
    if (m === s.length)
        return true;
    else
        return false;
};
