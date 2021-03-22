// Sol - 1 > brute force approach to do this O(n^2)
var numIdenticalPairs = function (nums) {
    let pairCount = 0;
    for (let i = 0; i < nums.length - 1; i++) {
        for (let j = i + 1; j < nums.length; j++) {
            if (nums[i] === nums[j]) {
                pairCount++;
            }
        }
    }
    return pairCount;
};

console.log(numIdenticalPairs([1, 2, 3, 1, 1, 3]))