#include<iostream>
using namespace std;
void rainWaterHarvesting(int [],int );

int main(){
    int len;
    cin>>len;
    int arr[len];

    for(int i=0; i<len;i++){
        cin>>arr[i];
    }

    rainWaterHarvesting(arr,len);

    return 0;
}

void rainWaterHarvesting(int arr[] , int len){

    int left[len], right[len];

    left[0] = arr[0];
    right[len-1] = arr[len-1];
    for(int i=1; i<len;i++){
        left[i] = max(arr[i] , left[i-1]);
    }

    for(int j=len-2; j>=0; j--){
        right[j] = max(arr[j] , right[j+1]);
    }
    int save=0;
    for(int i =0; i<len; i++){
        save = save + min(left[i] , right[i]) - arr[i];
    }
    cout<<save;
}