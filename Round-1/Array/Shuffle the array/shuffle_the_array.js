// Sol - 1 > My approach to suffle the array time complexity is O(n)
var shuffle = function (nums, n) {
    let center = nums.length / 2;
    let initial = 0;
    const result = [];
    for (let i = initial, c = center; i < center; i++, c++) {
        result.push(nums[i], nums[c]);
    }
    return result;
};

const arr = [1, 2, 4, 5, 6, 7, 4, 3, 3, 6, 4];
console.log(shuffle(arr, arr.length / 2));