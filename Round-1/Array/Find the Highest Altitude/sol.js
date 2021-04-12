//brute force approach - O(n^2)
// var largestAltitude = function (gain) {
//     let track = [];
//     for (let i = 0; i < gain.length + 1; i++) {
//         let sum = 0;
//         for (let k = 0; k < i; k++) {
//             sum += gain[k];
//         }
//         track.push(sum);
//     }
//     return Math.max(...track);

// };


// optimize apporach - O(n)
var largestAltitude = function (gain) {
    let largest_Altitude = 0;
    let track = 0;
    for (let i = 0; i < gain.length + 1; i++) {
        track += !i ? 0 : gain[i - 1];
        if (largest_Altitude <= track) {
            largest_Altitude = track;
        }
    }
    return largest_Altitude;
};

console.log(largestAltitude([-5, 1, 5, 0, -7]))