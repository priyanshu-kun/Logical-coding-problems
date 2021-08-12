// Sol - 1 >
#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    vector<int> decompressRLElist(vector<int> &nums)
    {
        vector<int> decodedList;
        for (int32_t i = 0; i < nums.size(); i += 2)
        {
            for (int32_t j = 0; j < nums[i]; ++j)
            {
                decodedList.push_back(nums[i + 1]);
            }
        }
        return decodedList;
    }
};
int main()
{
    vector<int> Sol_Array{1, 2, 3, 4};
    Solution Sol;
    Sol.decompressRLElist(Sol_Array);
    return 0;
}