#include <iostream>
using namespace std;

int lengthOfNumber(long int num)
{
    int len = 0;
    while (num > 0)
    {
        num = num / 10;
        len++;
    }

    return len;
}

void findInvertedNumber(long int num)
{
    if(num ==0){
        cout <<"0";
        return ;
    }
    int len = lengthOfNumber(num);
    long int arr[len], i = len - 1, rem;

    while (num > 0)
    {
        rem = num % 10;
        arr[i] = rem;
        i--;
        num = num / 10;
    }
    bool flag = false;
    for (int j = 0; j < len; j++)
    {
        arr[j] = (9 - arr[j] > arr[j] ? arr[j] : 9 - arr[j]);
    }

    for (int k = 0; k < len; k++)
    {
        if (arr[k] != 0 || flag)
        {
            cout << arr[k];
            flag = true;
        }
    }
    if(!flag){
        cout<<"0";
    }
}

int main()
{

    long int num;
    cin >> num;
    findInvertedNumber(num);

    return 0;
}