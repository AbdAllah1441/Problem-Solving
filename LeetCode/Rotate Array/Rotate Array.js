var rotate = function(nums, k) {
    let l = nums.length;
    if (k > l) 
        k = k - l;
    let z = [...nums.slice(l-k), ...nums.slice(0, l-k)];
    for (let i = 0; i < l; i++) {
        nums[i] = z[i];
    }
};
