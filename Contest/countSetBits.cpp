#include <iostream>
using namespace std;
void calculateSetBits(int );

int main()
{
    int times;
    cin >> times;

    while (times > 0)
    {
        int num;
        cin >> num;
        calculateSetBits(num);
        times--;
    }

    return 0;
}

void calculateSetBits(int num)
{
    int count = 0;
    int rem = 0, res = 0;

    while (num > 0)
    {
        rem = num % 2;
        if (rem == 1)
            count++;
        num = num / 2;
    }
    cout << count<<endl;
}