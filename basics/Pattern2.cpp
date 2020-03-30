#include <iostream>
using namespace std;

int main(){
    int num=0;

    cout<<"Enter number for pattern";
    cin>>num;
    int row=1;
    
    while(row <= num){

        // for space printng
        for(int i=1; i<=num-row; i++){
            cout<<" ";
        }
        // for number in increasing pattern 
        for(int j= row;j<=2*row-1;j++){
            cout<<j;
        }

        // for number in decresing pattern 
        for(int k= 2*row-2;k>=row;k--){
            cout<<k;
        }
        row++;
        cout<<endl;
    }


    return 0;
}