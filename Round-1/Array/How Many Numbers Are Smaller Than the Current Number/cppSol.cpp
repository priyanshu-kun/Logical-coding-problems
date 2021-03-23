// Solution - 1 > Brute force approach to solve this question - Time complexity is O(n^2) - Space complexity is O(n)
#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    vector<int> smallerNumbersThanCurrent(vector<int> &nums)
    {
        vector<int> result;
        int count = 0;
        for (auto it1 : nums)
        {
            count = 0;
            for (auto it2 : nums)
            {
                if (it1 > it2)
                {
                    count++;
                }
            }
            result.push_back(count);
        }
        return result;
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