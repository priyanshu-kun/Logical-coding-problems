#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Solution - 1 > Brute force approach to solve this question - Time complexity is O(n^2) - Space complexity is O(n)
// class Solution
// {
// public:
//     vector<int> smallerNumbersThanCurrent(vector<int> &nums)
//     {
//         vector<int> result;
//         int count = 0;
//         for (auto it1 : nums)
//         {
//             count = 0;
//             for (auto it2 : nums)
//             {
//                 if (it1 > it2)
//                 {
//                     count++;
//                 }
//             }
//             result.push_back(count);
//         }
//         return result;
//     }
// };

// Solution - 1 > optimise approach to solve this question - Time complexity is O(n) - Space complexity is O(n)
class Solution
{
public:
    vector<int> smallerNumbersThanCurrent(vector<int> &nums)
    {
        vector<int> v = nums;
        vector<int> ans;
        sort(v.begin(), v.end());
        for (int i = 0; i < nums.size(); i++)
        {
            ans.push_back(lower_bound(v.begin(), v.end(), nums[i]) - v.begin());
        }
        return ans;
    }
};
int main()
{
    vector<int> arr{8, 1, 2, 2, 3};
    Solution Sol;
    vector<int> result = Sol.smallerNumbersThanCurrent(arr);
    // Cout you result here
    return 0;
}
