// Sol - 1 > linear time complexity O(n)
#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int xorOperation(int n, int start)
    {
        int result = 0;
        for (int i = 0; i < n; ++i)
        {
            result ^= start + 2 * i;
        }
        return result;
    }
};
int main()
{
    Solution Sol;
    Sol.xorOperation(5, 0);
    return 0;
}