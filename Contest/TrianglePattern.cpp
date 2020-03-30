#include <iostream>
using namespace std;

int main(){
    int num;
    cin>>num;

    for(int i=1; i<= num; i++){

        // for space
        for(int j=1; j<= num-i; j++){
            cout<<"\t";
        }

        // for increasing order 
        for(int j=i; j <= 2*i-1; j++){
            cout<<j<<"\t";

        }

        // for decreasing order
        for(int k = 2*i-2; k>= i ; k--){
            cout<<k<<"\t";
        }

        cout<<endl;
    }



    return 0;
}