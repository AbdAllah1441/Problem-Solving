/**
 * @param {string} s
 * @param {string} t
 * @return {boolean}
 */
var isAnagram = function (s, t) {
  let s_map = {};
  let t_map = {};
  let length = s.length > t.length ? s.length : t.length;
  for (let i = 0; i < length; i++) {
    if (s_map[`${s[i]}`]) {
      s_map[`${s[i]}`] += 1;
    } else {
      s_map[`${s[i]}`] = 1;
    }
    if (t_map[`${t[i]}`]) {
      t_map[`${t[i]}`] += 1;
    } else {
      t_map[`${t[i]}`] = 1;
    }
  }
  let keys = Object.keys(s_map);
  for (let i = 0; i < keys.length; i++) {
    if (s_map[keys[i]] !== t_map[keys[i]]) {
      return false;
    }
  }
  return s_map;
};
