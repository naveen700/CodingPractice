#include <iostream>
using namespace std;

int main(){

    int a[] = {1,2,3,14,5};
    int size = sizeof(a)/sizeof(int);
    for(int i= 0 ; i<size-1; i++){
        if(a[i] > a[i+1]){
            cout<<"Array is not sorted";
            return 0;
        }
    }
    cout<<"Array is sorted";

    return 0;
}