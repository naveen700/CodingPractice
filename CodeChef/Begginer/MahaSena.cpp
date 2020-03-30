#include <iostream>
using namespace std;

int main(){

    int soldiers;
    cin>>soldiers;

    int even= 0,odd=0;

    while(soldiers >0){
        int num ;
        cin>>num;
        if(num%2 == 0){
            even++;
        }else{
            odd++;
        }
        soldiers--;
    }
    if(even > odd){
        cout<<"READY FOR BATTLE";
    }else{
        cout<<"NOT READY";
    }



    return 0;
}