#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;
    int s = 1;
    for (int row = 0; row < num; row++)
    {
        if (row <= (num / 2))
        {
            //  for star pattern
            for (int i = 1; i <= (num / 2) + 1 - row; i++)
            {
                if (row == 0 && i == (num / 2) + 1 - row)
                    continue;
                cout << "*"
                     << "\t";
            }
            // for space pattern
            for (int j = 0; j < row; j++)
            {
                cout << "\t";
            }
            if (row == (num / 2))
            {
                cout << "\t";
            }
            for (int i = 1; i <= (num / 2) + 1 - row; i++)
            {
                cout << "*"
                     << "\t";
            }
        }
        else
        {
            for (int i = 1; i <= s + 1; i++)
            {
                if (row == num-1 && i == s + 1)
                    continue;
                cout << "*"
                     << "\t";
            }
            // for space pattern
            for (int j = (num) / 2 - s; j > 0; j--)
            {
                cout << "\t";
            }
            for (int k = 1; k <= s+1; k++)
            {
                cout << "*"
                     << "\t";
            }

            // for space printing
            s++;
        }
        cout << endl;
    }

    return 0;
}