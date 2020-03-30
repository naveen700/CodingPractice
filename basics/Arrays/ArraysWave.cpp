#include<iostream>
using namespace std;

int main(){
    int row,col;
    cin>>row>>col;
    int arr[row][col];

    for(int i=0; i<row;i++){
        for(int j=0 ; j<col ; j++){
            cin>>arr[i][j];
        }
    }

    // col wave print logic
    int i=0,j=0;
    while( j < col){

        if(i==0){
            for(i=0; i<row;i++){
                
                if(i== row-1 && j == col-1){
                    cout<<arr[i][j]<<", END";
                }else{
                cout<<arr[i][j]<<", ";
                }
            }

        }else{
            for(i=row-1; i>=0; i--){
                
                if(i== 0 && j == col-1){
                    cout<<arr[i][j]<<", END";
                }else{
                    cout<<arr[i][j]<<", ";
                }
            }
            i= i +1;
        }

        j++;
    }
    


    return 0;
}
