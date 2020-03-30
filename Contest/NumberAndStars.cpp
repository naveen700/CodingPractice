#include <iostream>
using namespace std;

int main()
{

    int num;
    cin >> num;

    for (int i = 1; i <= num; i++)
    {

        // loop for numbers
        for (int j = 1; j <= num - i + 1; j++)
        {
            cout << j<<" ";
        }
        // loop for stars
        for (int l = 1; l < 2 * i - 2; l++)
        {
            cout << "*"
                 << " ";
        }
        cout << endl;
    }

    return 0;
}