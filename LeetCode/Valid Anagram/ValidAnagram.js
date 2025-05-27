/**
 * @param {string} s
 * @param {string} t
 * @return {boolean}
 */
var isAnagram = function (s, t) {
  if (s.length !== t.length) {
    return false;
  }
  let map = {};
  for (let i = 0; i < s.length; i++) {
    if (map[`${s[i]}`]) {
      map[`${s[i]}`] += 1;
    } else {
      map[`${s[i]}`] = 1;
    }
    if (map[`${t[i]}`]) {
      map[`${t[i]}`] -= 1;
    } else {
      map[`${t[i]}`] = -1;
    }
  }
  for (let key in map) {
    if (map[key] !== 0) {
      return false;
    }
  }
  return true;
};
