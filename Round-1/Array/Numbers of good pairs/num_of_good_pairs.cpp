#include <iostream>
#include <vector>
using namespace std;

// Sol - 2 > optimise solution time complexity O(n)  space complexity O(n)
// optimise class
class Solution
{
public:
    int numIdenticalPairs(vector<int> &nums)
    {
        vector<int32_t> cnt(100);
        int ans = 0;
        for (auto i : nums)
        {
            ans += cnt[i - 1];
            ++cnt[i - 1];
        }
        return ans;
    }
};

// Sol - 1 > brute force approach to do this O(n^2)
// brute force class
// class Solution
// {
// public:
//     int numIdenticalPairs(vector<int> &nums)
//     {
//         int32_t pairCount = 0;
//         for (int32_t i = 0; i < nums.size() - 1; ++i)
//         {
//             for (int32_t j = i + 1; j < nums.size(); ++j)
//             {
//                 if (nums[i] == nums[j])
//                 {
//                     pairCount++;
//                 }
//             }
//         }
//         return pairCount;
//     }
// };
int main()
{
    Solution Sol;
    vector<int> arr{1, 2, 3, 1, 1, 3};
    Sol.numIdenticalPairs(arr);
    return 0;
}