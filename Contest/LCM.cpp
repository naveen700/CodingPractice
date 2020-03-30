#include <iostream>
using namespace std;
void calculateLCM(int, int);

int main()
{
    int num1 = 0, num2 = 0;
    cin >> num1 >> num2;

    calculateLCM(num1, num2);

    return 0;
}

void calculateLCM(int num1, int num2)
{
    int a = num1, b = num2;
    int gcd = 0;
    while (num1 > 0 && num2 > 0)
    {
        if (num1 > num2)
        {
            num1 = num1 % num2;
        }
        else
        {
            num2 = num2 % num1;
        }
    }
    if (num1 == 0)
    {
        gcd = num2;
    }
    else
    {
        gcd = num1;
    }

    int lcm = a * (b / gcd);
    cout << lcm;
}