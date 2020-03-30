#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;

    int s = 0;
    for (int i = 0; i < 2 * num + 1; i++)
    {
        if (i < num)
        {
            int j = 0;
            // for number pattern
            for (j = 0; j <= i; j++)
            {
                cout << num - j << " ";
            }
            // for space printing
            for (int k = 0; k <= 2 * num - 2 * i - 2; k++)
            {
                cout << "  ";
            }
            // for number pattern
            for (int l = num - j + 1; l <= num; l++)
            {
                cout << l << " ";
            }
        }
        if (i == num)
        {
            for (int k = num; k >= 0; k--)
            {
                cout << k << " ";
            }
            for (int k = 1; k <= num; k++)
            {
                cout << k << " ";
            }
        }
        if (i > num)
        {
            int j = 0;
            // for number pattern
            for (j = 0; j <= num - s - 1; j++)
            {
                cout << num - j << " ";
            }
            // for space printing
            for (int k = 1; k <= 2 * s + 1; k++)
            {
                cout << "  ";
            }
            // for number pattern
            for (int l = s + 1; l <= num; l++)
            {
                cout << l << " ";
            }
            ++s;
        }

        cout << endl;
    }

    return 0;
}