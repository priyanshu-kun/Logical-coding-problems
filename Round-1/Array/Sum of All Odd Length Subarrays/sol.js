// Solution - 1 > Brute force approach
var sumOddLengthSubarrays = function (arr) {
    let result = 0;
    for (let i = 1; i <= arr.length; i++) {
        if (i % 2 !== 0) {
            for (let j = 0; j < arr.length; j++) {
                let subArray = arr.slice(j, i + j);
                if (subArray.length === i) {
                    result += subArray.reduce((accum, curr) => accum + curr, 0);
                }
            }
        }
    }
    return result;
};

sumOddLengthSubarrays([1, 4, 2, 5, 3])