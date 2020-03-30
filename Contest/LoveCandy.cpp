#include <iostream>
using namespace std;

int main(){
    int times=0;
    cin>>times;

    while(times >0){
        int num;
        cin>>num;
        totalPrime(num);

        times--;
    }


    return 0;
}