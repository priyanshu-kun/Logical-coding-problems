// Solution - 1 > Brute force approach to solve this question - Time complexity is O(n^2) - Space complexity is O(n)
var smallerNumbersThanCurrent = function (nums) {
    const compare = [];
    nums.forEach(num => {
        compare.push(nums.reduce((accum, curr) => {
            return num > curr ? accum + 1 : accum;
        }, 0))
    })
    return compare;
};

console.log(smallerNumbersThanCurrent([8, 1, 2, 2, 3]));