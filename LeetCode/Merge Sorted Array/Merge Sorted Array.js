var merge = function(nums1, m, nums2, n) {
    let temp = 0;
    for (let i = 0; i < m; i++) {
        for (let j = 0; j < n; j++) {
            if (nums2[j] < nums1[i] ) {
                temp = nums2[j];
                nums2[j] = nums1[i];
                nums1[i] = temp;
                nums2.sort((a,b) => a-b);
            }
        }
    }
    for (let i = 0; i < n; i++) {
        nums1[i+m] = nums2[i]
    }
};
