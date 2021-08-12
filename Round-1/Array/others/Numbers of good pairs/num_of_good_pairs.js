// Sol - 1 > brute force approach to do this O(n^2)
// var numIdenticalPairs = function (nums) {
//     let pairCount = 0;
//     for (let i = 0; i < nums.length - 1; i++) {
//         for (let j = i + 1; j < nums.length; j++) {
//             if (nums[i] === nums[j]) {
//                 pairCount++;
//             }
//         }
//     }
//     return pairCount;
// };



// Sol - 2 > Optimise solution  - time O(n) - space O(n)
var numIdenticalPairs = function (nums) {
    var numIdenticalPairs = function (nums) {
        const good_pairs = new Array(100).fill(0);
        let ans = 0;
        nums.forEach(num => {
            ans += good_pairs[num - 1];
            ++good_pairs[num - 1];
        })
        return ans;
    };
};

console.log(numIdenticalPairs([1, 2, 3, 1, 1, 3]))