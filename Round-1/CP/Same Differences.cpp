#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T)
    {
        vector<int> arr;
        long long int N, temp, pairs = 0;
        cin >> N;
        for (int i = 0; i < N; i++)
        {
            cin >> temp;
            arr.push_back(temp);
        }

        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                if (i < j && (arr[j] - arr[i] == j - i))
                {
                    pairs++;
                }
            }
        }
        cout << pairs << endl;

        T--;
    }

    return 0;
}