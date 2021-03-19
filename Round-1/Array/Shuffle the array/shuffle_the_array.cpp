// Sol - 1 > My approach to suffle the array time complexity is O(n)
#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    vector<int> shuffle(vector<int> &nums, int n)
    {
        vector<int> result;
        for (uint32_t i = 0, c = n; i < n; ++i, ++c)
        {
            result.push_back(nums[i]);
            result.push_back(nums[c]);
        }
        return result;
    }
};
int main()
{
    Solution shu;
    vector<int> nums{1, 2, 3, 4, 5, 6, 7, 8, 0, 9};
    int len = nums.size() / 2;
    shu.shuffle(nums, len);
    return 0;
}