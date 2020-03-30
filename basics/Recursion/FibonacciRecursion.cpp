#include <iostream>
using namespace std;

int fibonacciRecursion(int num){
    // base condition.
    if(num ==0 || num==1){
        return num;
    }

    int res = fibonacciRecursion(num-1) + fibonacciRecursion(num-2);
    return res;
}

int main(){

    int num;
    cin>>num;

    int res = fibonacciRecursion(num+1);
    cout<<res;

    return 0;
}