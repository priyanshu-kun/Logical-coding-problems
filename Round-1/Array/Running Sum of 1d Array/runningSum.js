//Sol - 1 >> Start of brute force approach to solve problem - wrost time complexity O(n^2)
const runningSum = (nums) => {
    let count = 0;
    let resultArray = [];
    for (let j = 0; j < nums.length; j++) {
        count = 0;
        for (let i = 0; i <= j; i++) {
            count += nums[i]
        }
        resultArray.push(count);
    }
    return resultArray;
}

console.log(runningSum([1, 22, 4, 5, 6, 7, 4, 6, 9]));
// End of brute force


//Sol - 2 >> Start some optimal solution - wrost time complexity O(n);
const runningSum = (nums) => {
    let sum = 0;
    for (i = 0; i < nums.length; i++) {
        sum += nums[i];
        nums[i] = sum;
    }
    return nums;
}

console.log(runningSum([1, 22, 4, 5, 6, 7, 4, 6, 9]));
// End