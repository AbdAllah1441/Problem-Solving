var reverseWords = function(s) {
    return s.trim().split(/[ ]+/).reverse().toString().replace(/,/g, " ");
};
