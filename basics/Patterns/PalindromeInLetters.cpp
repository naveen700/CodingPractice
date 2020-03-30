#include <iostream>
using namespace std;
void printPalindromePyramid(int rows);

int main()
{
    int rows;

    cout << "Enter rows";
    cin >> rows;
    printPalindromePyramid(rows);
}

void printPalindromePyramid(int rows)
{
    for (int i = 0; i <= rows; i++)
    {

        // for printig characters
        char ch = 65;
        while(ch < 65 + i){
            cout<<ch;
            ch++;
        }
        char chr = 65+i-2;
        while(chr >= 65){
            cout<<chr;
            chr--;
        }   


        cout << endl;
    }
}