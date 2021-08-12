// Sol - 1 > My approach to suffle the array time complexity is O(n)
var shuffle = function (nums, n) {
    const result = [];
    for (let i = 0; i < n; i++) {
        result.push(nums[i], nums[n + i]);
    }
    return result;
};

const arr = [1, 2, 4, 5, 6, 7, 4, 3, 3, 6, 4];
console.log(shuffle(arr, arr.length / 2));