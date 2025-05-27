/**
 * @param {string} s
 * @param {string} t
 * @return {boolean}
 */
var isAnagram = function (s, t) {
  let s_map = {};
  let t_map = {};
  for (let i = 0; i < s.length; i++) {
    if (s_map[`${s[i]}`]) {
      s_map[`${s[i]}`] += 1;
    } else {
      s_map[`${s[i]}`] = 1;
    }
  }
  for (let i = 0; i < t.length; i++) {
    if (t_map[`${t[i]}`]) {
      t_map[`${t[i]}`] += 1;
    } else {
      t_map[`${t[i]}`] = 1;
    }
  }
  if (Object.keys(s_map).length !== Object.keys(t_map).length) {
    return false;
  }
  let keys = Object.keys(s_map);
  for (let i = 0; i < keys.length; i++) {
    if (s_map[keys[i]] !== t_map[keys[i]]) {
      return false;
    }
  }
  return true;
};
