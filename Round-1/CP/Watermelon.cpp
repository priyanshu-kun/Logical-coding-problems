#include <iostream>
using namespace std;
void Watermelon()
{
    int weight = 0;
    cin >> weight;
    if (weight > 2 && weight % 2 == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
int main()
{
    Watermelon();
    return 0;
}