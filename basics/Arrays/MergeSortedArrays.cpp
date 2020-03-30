#include <iostream>
using namespace std;

void inputArray(int m[], int a ){

    for(int i=0; i< a ; i++){
        cin>>m[i];
    }

}

void mergeSortedArrays(int m[] ,int a, int n[] , int b){
    int i = a-1;
    int k=a+b-1;
    int j = b-1;

    while(i>=0 && j>=0 ){
        if(m[i] > n[j]){
            m[k] = m[i];
            k--;
            i--;
        }else{
            m[k] = n[j];
            j--;
            k--;
        }
    }

    if(j >=0){
        while(j>=0){
            m[j] = n[j];
            j--;
        }
    }

}

int main(){

    int m[1000];
    int n[1000];

    int msize , nsize;
    cin>>msize >> nsize;
    inputArray(m , msize );
    inputArray(n, nsize);

    mergeSortedArrays(m, msize,n, nsize);

    // printing array
    for(int i=0; i<msize+nsize ; i++){
        cout<<m[i]<<" ";
    }

    return 0;
}