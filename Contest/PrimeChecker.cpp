#include <iostream>
using namespace std;
void checkPrime(int);

int main()
{

    int num;
    cin >> num;
    checkPrime(num);

    return 0;
}

void checkPrime(int num)
{
    int start = 2;

    if (num == 1)
    {
        cout << "Not Prime";
    }
    else
    {

        while (start < num)
        {

            if (num % start == 0)
            {
                cout << "Not Prime"<<endl;
                break;
            }
            start++;
        }

        if(start == num){
            cout<<"Prime"<<endl;
        }
    }
}