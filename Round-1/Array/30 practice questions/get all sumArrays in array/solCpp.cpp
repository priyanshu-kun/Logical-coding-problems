#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int printSubArrays(int i,int j, string subArray)
{
    int sum = 0;
    for (int k = i; k <= j; k++)
    {
        sum += subArray[k];
        cout << subArray[k];
    }
    cout << "," << endl;
    return sum;
}

int main()
{
    // vector<int> subArray{1, 2, 3};
    string subArray = "Hello, World!";
    int sum = 0;
    for (int i = 0; i < subArray.length(); i++)
    {
        sum = 0;
        for (int j = i; j < subArray.length(); j++)
        {
            // only take sum
            // sum+=subArray[j];
            // cout << sum << endl;

            // print and take sum at same time
            // cout  <<  printSubArrays(i,j,subArray) << endl;
            printSubArrays(i,j,subArray);
        }
    }

    return 0;
}