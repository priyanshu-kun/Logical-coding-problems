#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


// brute force 
/**
 * time complexity will be O(N^2) and space O(collection.size())
*/
int main() {
    // vector<int>vet{8, 7, 2, 5, 3, 1, 9};
    // vector<int>result;
    // vector<vector<int>>collection;
    // int sum = 10;
    // int N = vet.size();
    // if(!vet.size()) {
    //     cout << "Array is empty!" << endl;
    // }
    // for(int i = 0; i < N; i++) {
    //     for(int j = i + 1; j < N; j++) {
    //         if(vet[i] + vet[j] == sum) {
    //             result.push_back(vet[i]);
    //             result.push_back(vet[j]);
    //         }
    //     }
    //     if(result.size()) {
    //         collection.push_back(result);
    //         result = {};
    //     }
    // }
    // if(!collection.size()) {
    //     cout << "There is nothing found." << endl;
    //     return -1;
    // }
    // int CS = collection.size();
    // int R = 2;
    // for(int i = 0; i < CS; i++) {
    //     for(int j = 0; j < R; j++) {
    //         cout << collection[i][j] << " ";
    //     }
    //     cout << endl;
    // }







    int arr[] = {8, 7, 2, 5, 3, 1};
    int sum = 10;
    int n = sizeof(arr)/sizeof(int);
    sort(arr, arr + n);
    int low = 0;
    int high = n - 1;
    while (low < high)
    {
        cout << arr[low] << " " << arr[high] << endl;
        if (arr[low] + arr[high] == sum)
        {
            cout << "Pair found (" << arr[low] << ", " << arr[high] << ")" << endl;
            return -1;
        }
        (arr[low] + arr[high] < sum)? low++: high--;
    }
    cout << "Pair not found";
    return 0;
}