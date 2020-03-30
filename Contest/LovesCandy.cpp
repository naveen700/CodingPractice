#include <iostream>

using namespace std;

bool calulatePrime(int num)
{
    if(num >2 && num%2 == 0){
        return false;
    }

    int j = 2;
    while (j < num)
    {
        if (num % j == 0)
        {
            return false;
        }
        j++;
    }

    return true;
}

int main()
{

    int times;
    cin >> times;

    while (times > 0)
    {
        int num;
        cin >> num;
        int i;
        for ( i = 2; num > 0; i++)
        {

            bool isPrime = calulatePrime(i);
            if(isPrime){
                num--;
            }
        }
        cout<<i-1<<endl;


        times--;
    }

    return 0;
}
