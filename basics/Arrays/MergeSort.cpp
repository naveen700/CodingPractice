#include <iostream>
using namespace std;
// complexit nlogn
void merge(int arr[], int x[] , int y[], int left ,int right){
    int mid = (left+right)/2;
    int i = left; //trace x array
    int j = mid+1; //trace y array
    int k = left; // trace in original array

    // to join two array so that they becomes sorted after joining
    while(i<= mid && j <= right){
        if(x[i] < y[j]){
            arr[k] = x[i];
            i++;
            k++;
        }else{
            arr[k] = y[j];
            k++;
            j++;
        }
    }

    // add remaining elements to original array
    if(i<=mid){
        while(i<=mid){
        arr[k] = x[i];
        i++;
        k++;
        }
    }
    if(j<=right){
        while(j<= right){
            arr[k]= y[j];
            j++;
            k++; 
        }
    }
}

void mergeSort(int a[], int left , int right){
    if(left>=right){
        return;
    }
    int mid = (left+right)/2;

    // we will break 1 time other times it will be done by recursion.
    int x[100],y[100];

    for(int i= left; i<= mid ; i++){
        x[i] = a[i];
    }

    for(int i=mid+1; i<= right; i++){
        y[i] = a[i];
    }
    mergeSort(x, left ,mid);
    mergeSort(y, mid+1, right);

    merge(a, x,y ,left ,right);
}


int main(){
    int a[] = {21,23,21,34,2,5};
    int size = sizeof(a)/sizeof(int);
    mergeSort(a,0,size-1);
    // printing sorted array

    for(int i=0; i<size; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}