/**
 * @param {number[][]} mat
 * @return {number}
 */
var diagonalSum = function (mat) {
    let count = 0;
    let flag = mat.length % 2 !== 0;
    for (let i = 0; i < mat[0].length; i++) {
        if (flag) {
            if (i == Math.floor(mat[0].length / 2)) {
                count += mat[i][i];
            }
            else {
                count += mat[i][i] + mat[i][mat[i].length - (i + 1)]
            }
        }
        else {
            count += mat[i][i] + mat[i][mat[i].length - (i + 1)]
        }
    }
    return count;
};

diagonalSum([[1, 2, 3],
[4, 5, 6],
[7, 8, 9]])