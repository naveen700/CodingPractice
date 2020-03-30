#include <iostream>
using namespace std;
void binarySearch(int [] , int ,int);

int main(){
    int n,key;
    cin>>n;

    int arr[n];
    // fill the array
    for(int i =0 ; i<n; i++){
        cin>>arr[i];
    }   

    cin>>key;

    binarySearch(arr,n, key);

    return 0;
}

void binarySearch(int arr[] , int len , int key){
    int start = 0, end = len-1;

    while(start <= end){
        int mid = (start+end)/2;

        if(arr[mid] == key){
            cout<<"Element found at index "<<mid;
            break;
        }else if(arr[mid] > key){
            end = mid-1;
        }else if(arr[mid] < key){
            start = mid +1;
        }
    }

    if(start > end){
        cout<<"Element Not Found!!";
    }

}