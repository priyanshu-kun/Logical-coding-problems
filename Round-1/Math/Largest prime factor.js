const largest_prime_factor = (num) => {
    let factors = [];
    for (let i = 2; i <= num; i === 2 ? i++ : i += 2) {
        for (let j = 2; j <= i; j === 2 ? j++ : j += 2) {
            if (i % j === 0) {
                break;
            }
            console.log("J: ", j)
        }
        console.log("\n")
    }
}

// largest_prime_factor(13195)
largest_prime_factor(15)