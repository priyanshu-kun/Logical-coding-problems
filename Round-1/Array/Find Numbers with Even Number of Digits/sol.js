// brute force apporach - O(n)
var findNumbers = function (nums) {
    return nums.reduce((a, c) => c.toString().length % 2 === 0 ? a + 1 : a, 0);
};
console.log(findNumbers([12, 345, 2, 6, 7896]))