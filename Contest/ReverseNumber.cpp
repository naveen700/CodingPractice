#include <iostream>

using namespace std;


int main(){

    int num;
    cin>>num;

    int rem=0, res=0;
    while(num > 0){
        rem = num%10;
        res = rem + res*10;
        num = num/10;

    }

    cout<<res;

    return 0;
}