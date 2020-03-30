#include <iostream>
using namespace std;
void printHollowPyramid(int rows);

int main()
{
    int rows;

    cout << "Enter rows";
    cin >> rows;
    printHollowPyramid(rows);
}

void printHollowPyramid(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        // loop for space
        for (int j = 1; j <= rows - i; j++)
        {
            cout << " ";
        }

        // loop for star printing
        for (int k = 1; k <= i; k++)
        {
            if(i==1 || i == rows-1){
                cout<<"* ";
            }else if(k==1 || k == i){
                cout<<"* ";
            }else{
                cout<<"  ";
            }
        }


        cout << endl;
    }
}