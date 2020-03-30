#include <iostream>
using namespace std;

int factorial(int num){
    int res = 1;
    for(int i=1; i <= num; i++){
        res = res*i;
    }
    return res;
}


void calculateNCR(int num , int r){
    int ncr = factorial(num)/(factorial( num - r) * factorial(r));
    cout<<ncr;
}

int main(){

    int num,r;
    cin>>num>>r;

    calculateNCR(num , r);

    return 0;
}