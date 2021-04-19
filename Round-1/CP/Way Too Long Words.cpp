#include <iostream>
#include <string>
using namespace std;
void Way_Too_Long_Words()
{
    int T;
    cin >> T;
    while (T)
    {
        string word, new_string = "";
        int count = 0;
        cin >> word;
        if (word.length() <= 10)
        {
            cout << word << endl;
        }
        else
        {
            new_string += word[0];
            for (int i = 1; i <= word.length() - 2; i++)
            {
                count++;
            }
            new_string = (new_string + to_string(count)) + word[word.length() - 1];
            cout << new_string << endl;
        }
        T--;
    }
}
int main()
{
    Way_Too_Long_Words();
    return 0;
}