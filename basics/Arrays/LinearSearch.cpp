#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;

    int a[num];
    int find;
    cin >> find;
    // read in array
    for (int i = 0; i < num; i++)
    {
        cin >> a[i];
    }

    // search in array
    int j = 0;
    for (j < 0; j < num; j++)
    {
        if (a[j] == find)
        {
            cout << "Number found at index " << j<<endl;
            break;
        }
    }

    if (j > num)
    {
        cout << "Number not found in Array";
    }

    return 0;
}