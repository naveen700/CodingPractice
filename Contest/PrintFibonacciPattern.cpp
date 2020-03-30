#include <iostream>
using namespace std;

int main()
{
    int num;

    cin >> num;

    int a = 0, b = 1, c = 0, i = 1;
    while (i <= num)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i == 1)
            {
                cout << a << "\t";
            }
            else
            {
                cout << c << "\t";
            }
            a = b;
            b = c;
            c = a + b;
        }
        i++;
        cout << endl;
    }

    return 0;
}