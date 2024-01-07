var isPalindrome = function(x) {
    if (x < 0)
        return false
    arr = []
    for (let i = 10; ; i = i * 10) {
        if (x >= i)
            arr.push(Math.floor((x % i) / (i /10)));
        else {
            arr.push(Math.floor(x / (i / 10)));
            break;
        }
    }
    for (let i = 0; i < arr.length; i++) {
        if (arr[i] !== arr[arr.length - 1 - i]) 
            return false;
    }
    return true;
};
