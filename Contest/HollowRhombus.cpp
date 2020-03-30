#include <iostream>
using namespace std;

int main(){

    int num;
    cin>>num;


    for(int i =1; i<= num; i++){
        // for space
        for(int j=1; j <= num-i; j++){
            cout<<" ";
        }

        // for star printing part
        for(int k =1 ; k<= num; k++){
            if(i==1 || i == num){
                cout<<"*";
            }
            else if(k==1 || k==num){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }

        cout<<endl;
    }


    return 0;
}