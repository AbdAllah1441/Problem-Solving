var removeElement = function(nums, val) {
    let k = nums.length;
    l = nums.length;
    for (let i = 0; i < l; i++) {
        if (nums[i] == val) {
            k--;
            if (i !== nums.length - 1) {
                for (let j = nums.length - 1; j > i ; j--) {
                    if (nums[j] !== val) {
                        temp = nums[j];
                        nums[j] = nums[i];
                        nums[i] = temp;
                        l--;
                        break;
                    }
                }
            }
        }
    }
    return k;
};
