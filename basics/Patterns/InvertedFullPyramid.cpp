#include <iostream>
using namespace std;
void printInvertedFullPyramid(int rows);

int main()
{
    int rows;

    cout << "Enter rows";
    cin >> rows;
    printInvertedFullPyramid(rows);
}

void printInvertedFullPyramid(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        // loop for star printing
        for (int k = 1; k <= i; k++)
        {
            cout << " ";
        }
        // loop for space
        for (int j = 1; j <= rows - i; j++)
        {
            cout << "* ";
        }

        cout << endl;
    }
}