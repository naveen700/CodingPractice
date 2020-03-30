#include <iostream>
using namespace std;

int main()
{

    int num;
    cin >> num;

    for (int row = 1; row <= num; row++)
    {
        if (row <= (num / 2))
        {

            cout << "*";
            for (int j = 1; j <= (num / 2) - 1; j++)
            {
                cout << " ";
            }
            if (row == 1)
            {
                for (int j = 1; j <= (num / 2) + 1; j++)
                {
                    cout << "*";
                }
            }
            else
            {
                cout << "*";
            }
        }
        else if (row == (num / 2) + 1)
        {
            for (int j = 1; j <= num; j++)
            {
                cout << "*";
            }
        }
        else if (row > (num / 2) + 1)
        {
            if (row != num)
            {
                for (int j = 1; j <= (num / 2) ; j++)
                {
                    cout << " ";
                }
                cout << "*";
                for (int j = 1; j <= (num / 2) - 1; j++)
                {
                    cout << " ";
                }
                cout << "*";
            }
            else
            {
                for (int i = 1; i <= (num / 2) + 1; i++)
                {
                    cout << "*";
                }
                for (int j = 1; j <= (num / 2) - 1; j++)
                {
                    cout << " ";
                }
                cout << "*";
            }
        }
        cout << endl;
    }

    return 0;
}