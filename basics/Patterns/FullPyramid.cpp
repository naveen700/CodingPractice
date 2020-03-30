#include <iostream>
using namespace std;
void printFullPyramid(int rows);

int main()
{
    int rows;

    cout << "Enter rows";
    cin >> rows;
    printFullPyramid(rows);
}

void printFullPyramid(int rows)
{
    for (int i = 1; i <= rows; i++)
    {
        // loop for space
        for (int j = 1; j <= rows-i; j++)
        {   
            cout<<" ";
        }
        // loop for star printing
        for(int k=1 ; k <= i; k++){
            cout<<"* ";
        }

        cout << endl;
    }
}