#include <iostream>
using namespace std;
void converToOctal(int);
void reverseNumber(int);

    int main()
{

    int decimal;
    cin >> decimal;

    converToOctal(decimal);
}

void converToOctal(int decimal)
{
    int rem = 0, quotient = 0, res = 0;
    while (decimal > 0)
    {
        rem = decimal % 8;
        res = rem + res * 10;
        decimal = decimal / 8;
    }
    reverseNumber(res);
}
void reverseNumber(int num)
{
    int rem = 0, quotient = 0, res = 0;
    while (num > 0)
    {
        rem = num % 10;
        res = rem + res * 10;
        num = num / 10;
    }
    cout << res;
}