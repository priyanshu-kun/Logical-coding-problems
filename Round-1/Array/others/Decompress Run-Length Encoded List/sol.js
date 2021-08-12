
var decompressRLElist = function (nums) {
    const decodedList = [];
    for (let i = 0; i < nums.length; i += 2) {
        for (let j = 0; j < nums[i]; j++) {
            decodedList.push(nums[i + 1])
        }
    }
    return decodedList;
};

decompressRLElist([1, 2, 3, 4])