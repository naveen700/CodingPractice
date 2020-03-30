#include <iostream>
using namespace std;


int main(){

    int n;

    cin>>n;

    int sqt=1;
    while(sqt*sqt <= n){

        sqt = sqt +1;
    }
    cout<<sqt-1<<" is the nearest square root of number";


    return 0;
}