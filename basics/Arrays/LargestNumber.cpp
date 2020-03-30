#include <iostream>
#include<climits>
//  climits library contains min or max values for datatype like here for int
using namespace std;

int main()
{
    int num;
    cin >> num;

    int a[num], largest = INT_MIN;
    // use int_min its better.
    for (int i = 0; i < num; i++)
    {
        cin >> a[i];
    }

    for (int j = 0; j < num; j++)
    {
        if (a[j] > largest)
        {
            largest = a[j];
        }
    }
    cout << "Largest is " << largest<<endl;

    return 0;
}