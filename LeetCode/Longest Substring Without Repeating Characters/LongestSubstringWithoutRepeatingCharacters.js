/**
 * @param {string} s
 * @return {number}
 */
var lengthOfLongestSubstring = function(s) {
    let str = '';
    let max = 0;
    for (let i = 0, j = 0; i < s.length; i++) {
        if (str.includes(s[i])) {
            max = str.length > max ? str.length : max;
            j += str.indexOf(s[i]) + 1;
            str = s.slice(j, i + 1);
        } else {
            str += s[i]
        }
    }
    return str.length > max ? str.length : max;
};
