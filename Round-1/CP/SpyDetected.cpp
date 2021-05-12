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
        long long int N, temp;
        cout << ">> ";
        cin >> N;
        for (int i = 0; i < N; i++)
        {
            cout << "<< ";
            cin >> temp;
            arr.push_back(temp);
        }
        for (auto it : arr)
        {
            cout << it << " ";
        }

        T--;
    }

    return 0;
}