// brute force approach - O(n)
const Find_Addition_of_Multiples = (three, five, limit) => {
    let sum = 0;
    for (let i = 3; i < limit; i++) {
        if (i % 3 === 0 || i % 5 === 0) {
            sum += i;
        }
    }
    return sum;
}

// Optimize solution - O(1)
const More_Efficient_Sol_Find_Addition_of_Multiples = (three, five, limit) => {
    function sumDivisibleByN(N) {
        // Get the multiples of 5 OR 3 between 1 -> limit(1000) - let's take a example, we get no of multiples is 333.3333333.... so on and if we round it to the nearst integer then we get 333.
        let p = Math.floor((limit - 1) / N);
        // Formula to get sum of all posible mutiples between 1 -> limit
        // General classification - 3+6+9+12+......+999 = 3*(1+2+3+4+...+333)
        return Math.floor(N * (p * (p + 1) / 2));
    }
    /**
     * To get a more efficient solution we could also calculate the sum of the numbers less
     * than 1000 that are divisible by 3, plus the sum of the numbers less than 1000 that are divisible
     * by 5. But as we have summed numbers divisible by 15 twice you would have to subtract the
     * sum of the numbers divisible by 15.
     */
    return sumDivisibleByN(3) + sumDivisibleByN(5) - sumDivisibleByN(15);
}
console.log(More_Efficient_Sol_Find_Addition_of_Multiples(3, 5, 1000))
// console.log(Find_Addition_of_Multiples(3, 5, 1000));