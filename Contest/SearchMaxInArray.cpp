#include <iostream>
using namespace std;
void findMaxInArray(int[], int);

int main()
{

    int len = 0, arr[100];
    cin >> len;

    // data input to array
    for (int i = 0; i < len; i++)
    {
        cin >> arr[i];
    }

    findMaxInArray(arr, len);

    return 0;
}

void findMaxInArray(int arr[], int len)
{
    int max = arr[0];

    for (int i = 1; i < len; i++)
    {
        if(arr[i] > max){
            max= arr[i];
        }
    }
    cout<<max;

}