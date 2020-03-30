#include <iostream>
void lastOccurence(int [] , int , int);
using namespace std;

// Upper bound means last occurence of element . we can modify binary search to achieve this.

int main(){
    int num,key;
    cin>>num;
    int arr[num];

    for(int i=0; i < num; i++){
        cin>>arr[i];
    }
    cin>>key;
    lastOccurence(arr, num , key);


    return 0;

}

void lastOccurence(int arr[] , int len , int key){ 
    int start = 0 , end = len-1, ans=-1;

    while(start <= end){
        int mid = (start+end)/2;

        if(arr[mid] == key){
            ans = mid;
            start = mid+1;
        }
        else if(arr[mid] < key){
            start = mid+1;
        }else if(arr[mid] > key){
            end = mid-1;
        }
    }

    cout<<"Element Found at Index "<<ans;
}