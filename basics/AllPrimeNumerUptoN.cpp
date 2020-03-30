#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number for prime number list";
    cin >> num;

    int i = 2;
    bool flag = true;
    while (i <= num)
    {
        int check = 2;
        while (check < i)
        {   
            if(i%check == 0){
                flag = false;
                break;
            }
            check++;
        }
        if(flag){
            cout<<i<<" ";
        }
        i++;
        flag = true;
    }
    return 0;
}