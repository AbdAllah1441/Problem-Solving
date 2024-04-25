var merge = function(nums1, m, nums2, n) {
    //nums1
    for (let i = 0; i < m; i++) {
        //nums2
        for (let j = 0; j < n; j++) {
            if (nums1[i] > nums2[j]) {
                const x = nums1[i];
                nums1[i] = nums2[j];
                nums2[j] = x;
            }
        }
    }
    nums2.sort(function(a, b){return a - b});
    for (let index = 0; index < n; index++) {
        nums1[m + index] = nums2[index]
    }
};
