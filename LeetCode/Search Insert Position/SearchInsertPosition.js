var searchInsert = function(nums, target) {
    for (let i = 0; i < nums.length; i++) {
        if (nums[i] >= target)
            if (nums[i - 1] === target)
                return i - 1;
            else
                return i;
    }
    return nums.length;
};
