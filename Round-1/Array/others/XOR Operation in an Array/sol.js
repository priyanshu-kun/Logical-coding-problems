// Sol - 1 > linear time complexity O(n)
// var xorOperation = function (n, start) {
//     return new Array(n)
//         .fill(0)
//         .map((_, idx) => start + 2 * idx)
//         .reduce((accum, curr) => accum ^= curr, 0);
// };


// Sol - 2.
var xorOperation = function (n, start) {
    let result = 0;
    for (let i = 0; i < n; ++i) {
        result ^= start + 2 * i
    }
    return result;
};
xorOperation(5, 0)
