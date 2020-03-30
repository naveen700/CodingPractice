#include <iostream>
using namespace std;
void printInvertedHalfPyramid(int rows);

int main()
{
    int rows;

    cout << "Enter rows";
    cin >> rows;
    printInvertedHalfPyramid(rows);
}

void printInvertedHalfPyramid(int rows)
{
    for (int i = 1; i <= rows; i++)
    {
        for (int j = rows; j > i; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
}