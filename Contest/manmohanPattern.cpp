#include <iostream>
using namespace std;

int main(){

    int num;
    cin>>num;

    for(int i=1 ; i<= num; i++){

        for(int j=1; j<=i; j++){
            if(i==1){
                cout<<i;
            }else if(j==1 || j==i){
                cout<<i-1;
            }else{
                cout<<"0";
            }

        }
        cout<<endl;
    }




    return 0;
}