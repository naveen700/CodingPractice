#include <iostream>
using namespace std;

int main()
{
    int row, col;
    cin >> row >> col;
    int arr[100][100];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }

    int j = 0,sr=0,er=row-1,sc=0,ec=col-1;
    while (j < row * col)
    {
        for(int i=sc; i<=ec; i++){
            cout<<arr[sr][i]<<" ";
            j++;
        }
        sr++;
        for(int i=sr;i<=er;i++ ){
            cout<<arr[i][ec]<<" ";
            j++;
        }
        ec--;
        for(int i=ec;i>=sc;i--){
            cout<<arr[er][i]<<" ";
            j++;
        }
        er--;
        for(int i=er; i >=sr; i--){
            cout<<arr[i][sc]<<" ";
            j++;
        }
        sc++;

    }

    return 0;
}