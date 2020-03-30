#include <iostream>
using namespace std;


int main(){

    int cum=0;

    while(cum >= 0){
        int num ;
        cin>>num;
        cum += num;
        if(cum < 0){
            break;
        }
        cout<<num<<endl;
    }

    return 0;
}