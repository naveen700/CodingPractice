#include <iostream>
using namespace std;

int main()
{

    int num;
    cin >> num;
    int s = 1;
    for (int n = 0; n < num; n++)
    {
        if (n < num / 2 + 1)
        {
            // for first space;
            for (int i = num - 2 * n - 1; i > 0; i--)
            {
                cout << "  ";
            }

            if (n == 0)
            {
                cout << " ";
            }
            for (int k = n + 1; k > 0; k--)
            {

                cout << k << " ";
            }
            for (int j = 0; j < n; j++)
            {
                cout << "  ";
            }
            for (int j = 0; j < n; j++)
            {
                cout << "  ";
            }

            for (int k = 1; k < n + 2; k++)
            {
                if (n == 0)
                    continue;
                cout << k << " ";
            }

            cout << endl;
        }
        else
        {

            for (int i = 0; i < 2 * s; i++)
            {
                cout << "  ";
            }

            if (n == num - 1)
            {
                cout << " ";
            }
            for (int j = num - n; j > 0; j--)
            {
                cout << j << " ";
            }

            for (int k = num - n - 1; k > 0; k--)
            {
                cout << "  ";
            }
            for (int k = num - n - 1; k > 0; k--)
            {
                cout << "  ";
            }
            for (int k = 1; k <= num - n; k++)
            {
                if (n == num - 1)
                    continue;
                cout << k << " ";
            }

            s++;
            cout << endl;
        }
    }

    return 0;
}