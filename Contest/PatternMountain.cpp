#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;

    for (int i = 1; i <= num; i++)
    {

        // for first number pattern
        for (int j = 1; j <= i; j++)
        {
            cout << j << "\t";
        }
        // for space printing
        for (int k = 1; k <= num - i; k++)
        {
           if(k== num-i){
               cout<<"\t";
           }else{
                cout << "\t\t";
           }
        }
        // for second number pattern
        for (int l = i; l > 0; l--)
        {
            if (l != num)
            {
                cout << l << "\t";
            }
        }
        cout << endl;
    }

    return 0;
}