#include <iostream>
using namespace std;

int main() {
    int list[] = {29,3,1,31,9,20,0,12,44,34};
    int size = sizeof(list)/sizeof(int);
    int min = 0;
    int max = 0;

    if(size == 1) {
        min = list[0];
        max = list[0];
    }

    if(list[0] < list[1]) {
        min = list[0];
        max = list[1];
    }
    else {
        min = list[1];
        max = list[0];
    }

    for(int i = 2; i < size; i++) {
        if(list[i] < min) {
            min = list[i];
        }
        else if(list[i] > max) {
            max = list[i];
        }
    }

    cout << min << " " << max << endl;


    return 0;
}