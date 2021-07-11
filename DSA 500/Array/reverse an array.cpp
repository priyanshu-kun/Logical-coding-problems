#include <iostream>
using namespace std;

int main() {
    int list[] = {1,2,3,4,5,6,7,8,9};
    int size = sizeof(list)/sizeof(int);
    if(!size) {
        cout << "List is empty" << endl;
        return -1;
    }
    for(int i = 0,j=size-1; i < size/2; i++,j--) {
        int temp = list[i];
        list[i] = list[j];
        list[j] = temp;
    }
    for(int it:list) {
        cout << it << " ";
    }
    cout << endl;
    return 0;
}