#include <iostream>
using namespace std;
void printRectangle(int , int);

int main(){

    int rows,cols;
    cout<<"Enter rows";
    cin>>rows;
     cout<<"Enter columns";
    cin>>cols;

    printRectangle(rows,cols);


    return 0;
}

void printRectangle(int rows, int cols){
    // to print pattern
    for(int i=0 ; i<rows ;i++){
        for(int j=0;j<cols;j++){
            cout<<"*";

        }
        cout<<endl;
    }


}