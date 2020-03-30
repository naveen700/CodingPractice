#include <iostream>
using namespace std;
void printInvertedHollowPyramid(int rows);

int main()
{
    int rows;

    cout << "Enter rows";
    cin >> rows;
    printInvertedHollowPyramid(rows);
}

void printInvertedHollowPyramid(int rows)
{
    for (int i = 1; i <= rows; i++)
    {
        for (int j = rows; j >= i; j--)
        {
            if (i == 1 || i == rows)
            {
                cout << "* ";
            }
            else if (j == i || j==rows)
            {
                cout << "* ";
            }
            else
            {
                cout<<"  ";
            }
        }
        cout << endl;
    }
}