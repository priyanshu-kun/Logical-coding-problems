// Sol - 1 > linear time complexity O(n)
var countMatches = function (items, ruleKey, ruleValue) {
    let output = 0;
    items.forEach(item => {
        switch (ruleKey) {
            case "type":
                item[0] === ruleValue && output++;
                break;
            case "color":
                item[1] === ruleValue && output++;
                break;
            case "name":
                item[2] === ruleValue && output++;
                break;
        }
    })
    return output;
};

console.log(countMatches([["phone", "blue", "pixel"], ["computer", "silver", "lenovo"], ["phone", "gold", "iphone"]], "color", "silver"));