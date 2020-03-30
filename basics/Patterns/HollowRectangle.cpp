#include <iostream>
using namespace std;
void printHollowRectangle(int , int);

int main(){
    int rows,cols;
    cout<<"Enter rows";
    cin>>rows;
    cout<<"Enter columns";
    cin>>cols;

    printHollowRectangle(rows,cols);

    return 0;
}

void printHollowRectangle(int rows, int cols){

    for(int i=1 ; i<= rows;  i++){

        // for column wise star printing

        for(int j=1; j<= cols; j++){

            if(i==1 || i== rows){
                cout<<"* " ;
            }else{
                if(j==1 || j==cols){
                    cout<<"*";
                }else{
                cout<<" ";
                }
            }


        }

        cout<<endl;

    }
}