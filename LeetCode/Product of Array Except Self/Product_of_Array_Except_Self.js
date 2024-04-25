var productExceptSelf = function(nums) {
    const l = nums.length;
    let m = 1;
    let zf = 0;
    let mf = false;
    const answer = Array(l).fill(1);
    for (let i = 0; i < l; i++) {
        if (nums[i] === 0) {
            zf++;
            continue
        }
        m = m * nums[i];
        mf = true;
    }
    if (zf > 0) {
        if (zf > 1) {
            for (let i = 0; i < l; i++) {
                answer[i] = 0;
            }
        }
        else if (!mf) {
            for (let i = 0; i < l; i++) {
                answer[i] = 0;
            }
        }
        else {
            for (let i = 0; i < l; i++) {
                if (nums[i] === 0) {
                    answer[i] = m;
                }
                else {
                    answer[i] = 0;
                }
            }
        }
    }
    else {
        for (let i = 0; i < l; i++) {
            answer[i] = m * 1/nums[i];
        }
    }
    return answer;
};
