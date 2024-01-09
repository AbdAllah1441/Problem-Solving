var containsNearbyDuplicate = function(nums, k) {
    let sorted = [...nums].sort(function(a, b){return a - b});
    let repeated = {};
    for (let i = 0; i < sorted.length - 1; i++) {
        if (sorted[i] === sorted[i + 1])
            repeated[sorted[i]] = true;
    }
    for (let i = 0; i < nums.length - 1; i++) {
        if (repeated[nums[i]] === true) {
            for (let j = nums.length - 1; j > i; j--) {
                if (nums[i] === nums[j])
                    if (Math.abs(i - j) <= k)
                        return true
            }
        }
    }
    return false;
};
