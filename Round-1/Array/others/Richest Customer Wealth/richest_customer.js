// Sol - 1 > Brute force approach Time complexity O(n^2);
var maximumWealth = function (accounts) {
    let count = 0;
    let maxWealth = 0;
    accounts.forEach(item => {
        count = 0;
        count = item.reduce((accum, curr) => accum + curr, 0);
        if (maxWealth < count) {
            maxWealth = count;
        }
    })
    return maxWealth;
};

console.log([[1, 2, 3], [3, 2, 1]]);