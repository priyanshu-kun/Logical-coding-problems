// Sol - 1 > in linear time complexity O(n) 
var createTargetArray = function (nums, index) {
    const target = [];
    for (let i = 0; i < index.length; i++) {
        target.splice(index[i], 0, nums[i]);
    }
    return target;
};

createTargetArray([0, 1, 2, 3, 4], [0, 1, 2, 2, 1])