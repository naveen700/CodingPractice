#include <iostream>
using namespace std;

bool checkIfSorted(int *a ,int n){
    // base case
    if(n == 1)
        return true;

    if(a[0] < a[1] && checkIfSorted(a+1,n-1)){
        return true;
    }
    return false;
}

int main(){

    int a[100],len;
    cin>>len;

    // read array
    for(int i=0; i<len;i++){
        cin>>a[i];
    }
    bool isSorted = checkIfSorted(a,len);
    if(isSorted){
        cout<<"array is sorted";
    }else{
        cout<<"array is not sorted";
    }
    
}