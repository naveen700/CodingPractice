#include <iostream>
using namespace std;
void printHalfPyramid(int rows);

int main()
{
    int rows;

    cout << "Enter rows";
    cin >> rows;
    printHalfPyramid(rows);
}

void printHalfPyramid(int rows)
{
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}