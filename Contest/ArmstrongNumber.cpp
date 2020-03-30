#include <iostream>
using namespace std;
int power(int,int);
void isArmstrong(int);
int findLength(int num);
int main()
{
    int num;
    cin >> num;

    isArmstrong(num);

    return 0;
}

void isArmstrong(int number)
{
    int pow = findLength(number);
    int sum = 0;
    int num = number;
    while (num > 0)
    {
        int rem = num % 10;
        sum = sum + power(rem, pow);
        num = num / 10;
    }
    if (sum == number)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
}

int findLength(int num)
{
    int len = 0;

    while (num > 0)
    {
        len++;
        num = num / 10;
    }
    return len;
}
int power(int num, int expo)
{
    int res = 1;

    while (expo > 0)
    {
        res = res * num;
        expo--;
    }

    return res;
}