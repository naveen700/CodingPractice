#include <iostream>
using namespace std;
void printNumberStar(int rows);

int main()
{
    int rows;

    cout << "Enter rows";
    cin >> rows;
    printNumberStar(rows);
}

void printNumberStar(int rows)
{
    for (int i = 1; i <= rows; i++)
    {

        // for printing star pattern
        for(int j =1; j<=2*rows-i-1; j++){
            cout<<"*";
        }
        // for printing number pattern
        for(int num =1; num <=i; num++){
            if(num==i){
                cout<<i;
            }else{
                cout<<i<<"*";
            }
        }

        for(int j =1; j<=2*rows-i-1; j++){
            cout<<"*";
        }
        cout << endl;
    }
}