#include <iostream>
using namespace std;

int main()
{

    char ch;
    int words = 0;
    bool first = false;
    ch = cin.get();

    while (ch != '$')
    {

        if ((ch >= 97 && ch <= 122) && !first || (ch >= 65 && ch <= 90))
        {
            words++;
            first = true;
        }
        else if (ch == 32)
        {
            first = false;
        }

        ch = cin.get();
    }
    cout << "Total number of words are " << words << endl;
    return 0;
}