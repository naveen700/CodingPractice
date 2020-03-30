#include <iostream>
using namespace std;

void printArray(int *a , int i){
    if(i == 0){
        return ;
    }
    cout<<a[0];
    printArray(a+1,i-1);
}

int main(){

    int a[] = {1,2,3,4,5,6};
    int n=sizeof(a)/sizeof(int);
    printArray(a,n);

    return 0;
}