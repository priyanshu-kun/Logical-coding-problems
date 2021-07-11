/**
 * PROBLEM STATEMENT -
 * Find the larget sum of subarrays in an array
 * 
 * */

// brute force approach time compleixty O(n^2)
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

// int main() {
//     int list[] = {29,3,1,31,9,20,0,12,44,34};
//     int size = sizeof(list)/sizeof(int);
//     for(int i = 0; i < size; i++) {
//         int sum = 0;
//         for(int j = 0; j <= i; j++) {
//             sum+=list[j];
//         }
//         list[i] = sum;
//     }
//     cout << list[size-1] << endl;
//     cout << list[0] << endl;
//     return 0;
// }


// optimize solution O(n) using prefix algorithm
int main() {
    int list[] = {29,3,1,31,9,20,0,12,44,34};
    int size = sizeof(list)/sizeof(int);
    for(int i = 1; i < size; i++) {
       list[i] = list[i-1] + list[i];
    }
    cout << "MAX: " << list[size-1] << endl;
    cout << "MIN: " << list[0] << endl;
    return 0;
}