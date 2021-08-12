//Sol - 1 >> Start of brute force approach to solve problem - wrost time complexity O(n)
var kidsWithCandies = function (candies, extraCandies) {
    const maxElement = Math.max(...candies);
    const result = [];
    for (let i = 0; i < candies.length; i++) {
        let candie = candies[i] + extraCandies;
        result.push(candie < maxElement ? false : true)
    }
    return result;
};

console.log(kidsWithCandies([2, 3, 5, 1, 3], 3));