#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        // for number pattern
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }

        //for star pattern
        for (int k = 1; k <= num - i; k++)
        {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}