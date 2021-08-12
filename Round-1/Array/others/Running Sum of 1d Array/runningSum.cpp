#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    vector<int> runningSum(vector<int> &nums)
    {
        unsigned long int count = 0;
        for (int i = 0; i < nums.size(); ++i)
        {
            count += nums[i];
            nums[i] = count;
        }
        return nums;
    }
};
int main()
{
    Solution sol;
    vector<int> arr{1, 2, 3, 4, 5, 6};
    sol.runningSum(arr);
    return 0;
}