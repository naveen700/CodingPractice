#include <iostream>
using namespace std;

int main()
{

    int num;
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        // for printing numbers
        for (int j = 1; j <= i; j++)
        {
            if (j == 1 || j == i)
            {
                cout << i<<" ";
            }
            else
            {
                cout << "0"<<" ";
            }
        }
        cout << endl;
    }

    return 0;
}