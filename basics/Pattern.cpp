#include <iostream>
using namespace std;

int main(){
    int num;

    cout<<"Please Enter Number for pattern";
    cin>>num;

    int row =1, val=1, itr=1;

    while(row <= num){
        itr=1;
        while(itr <= row){
            cout<<val<<" ";
            val++;
            itr++;
        }
        cout<<"\n";
        row++;
    }

}