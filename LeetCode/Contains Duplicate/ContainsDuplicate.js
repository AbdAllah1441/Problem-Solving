class Solution {
    /**
     * @param {number[]} nums
     * @return {boolean}
     */
    hasDuplicate(nums) {
        let x = {};
        for (let i = 0; i < nums.length; i++) {
            if (x[`${nums[i]}`]) {
                return true;
            } 
            else {
                x[`${nums[i]}`] = true;
            }
        }
        return false;
    }
}
