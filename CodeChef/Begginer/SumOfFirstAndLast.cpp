#include <iostream>
using namespace std;
void sumOfFirstAndLastDigit(int);

int main()
{
    int times;
    cin >> times;

    while (times > 0)
    {
        int num = 0;
        cin >> num;
        sumOfFirstAndLastDigit(num);
        times--;
    }
    return 0;
}

void sumOfFirstAndLastDigit(int num)
{
    if(num <0){
        num = -num;
    }
    int rem = 0;
    int sum = 0;
    int i = 1;

    while (num > 0)
    {

        rem = num % 10;
        if (i == 1 || (num > 0 && num <= 9))
        {
            i++;
            sum = sum + rem;
        }

        num = num / 10;
    }
    cout << sum<<endl;
}