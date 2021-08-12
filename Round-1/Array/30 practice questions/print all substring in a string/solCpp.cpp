#include <iostream>
using namespace std;
void printAllSubstrings(string str)
{
    int n = str.length();
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++) {
            cout << i <<  j <<" " << (j - i) + 1 << endl;
            cout << "'" << str.substr(i, j - i + 1) << endl;
        }
        /**
         * i          j       print
         * 0 -> ((0-0)+1)(1) = 'H',
         * 0 -> ((1-0)+1)(2) = 'He',
         * 0 -> ((2-0)+1)(3) = 'Hel',
         * 0 -> ((3-0)+1)(4) = 'Hell',
         * 0 -> ((4-0)+1)(5) = 'Hello',
         * 0 -> ((5-0)+1)(6) = 'Hello!',
         * 1 -> ((1-1)+1)(1) = 'e',
         * 1 -> ((2-1)+1)(2) = 'el',
         * 1 -> ((3-1)+1)(3) = 'ell',
         * 1 -> ((4-1)+1)(4) = 'ello',
         * 1 -> ((5-1)+1)(5) = 'ello!',
         * 2 -> ((2-2)+1)(1) = 'l',
         * 2 -> ((3-2)+1)(2) = 'll',
         * 2 -> ((4-2)+1)(3) = 'llo',
         * 2 -> ((5-2)+1)(4) = 'llo!',
         * 3 -> ((3-3)+1)(1) = 'l',
         * 3 -> ((4-3)+1)(2) = 'lo',
         * 3 -> ((5-3)+1)(3) = 'lo!',
         * 4 -> ((4-4)+1)(1) = 'o',
         * 4 -> ((5-4)+1)(2) = 'o!',
         * 5 -> ((5-5)+1)(1) => '!'
         * i terminated :D
         * j terminated :D
         * 
        */
        cout << endl;
    }
}
 
int main()
{
    string str = "Hello!";
    printAllSubstrings(str);
 
    return 0;
}