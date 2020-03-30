#include <iostream>
using namespace std;
void selectionSort(int[], int);

int main()
{
    int len;
    cin >> len;
    int arr[len];

    for (int i = 0; i < len; i++)
    {
        cin >> arr[i];
    }
    selectionSort(arr, len);

    return 0;
}

void selectionSort(int arr[], int len)
{

    for (int i = 0; i < len; i++)
    {
        int minIndex = i;
        int min = arr[i];

        for (int j = i + 1; j < len; j++)
        {
            if (min > arr[j])
            {
                min = arr[j];
                minIndex = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }

    for (int i = 0; i < len; i++)
    {
        cout << arr[i]<<endl;
    }
}