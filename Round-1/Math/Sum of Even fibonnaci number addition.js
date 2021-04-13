// Brute force approach - O(n)
// const SumEvenFibonnaciNumbers = (limit) => {
//     let tot = 0
//     let a = 1
//     let b = 1
//     let h = a + b;
//     while (h <= limit) {
//         // console.log(h) 
//         if (h % 2 === 0) {
//             tot += h;
//         }
//         a = b
//         b = h
//         h = a + b
//     }
//     return tot;
// }


// more optimize approach 
const SumEvenFibonnaciNumbers = (limit) => {
    let tot = 0
    let a = 1
    let b = 1
    let c = a + b;
    while (c <= limit) {
        tot += c;
        a = b + c;
        b = c + a;
        c = a + b
    }
    return tot;
}

console.log(SumEvenFibonnaciNumbers(4000000));