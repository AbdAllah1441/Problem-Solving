var isPalindrome = function(s) {
    let t = s.replace(/[^a-zA-Z0-9]/g, "");
    for (let i = 0; i < t.length / 2; i++) {
        if (t[i].toLowerCase() !== t[t.length - 1 - i].toLowerCase())
            return false;
    }
    return true;
};
