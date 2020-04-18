#include <iostream>
using namespace std;
void selectionSort(int [] , int);


int main(){
    int num ;
    cin>>num;
    int arr[num];
    for(int i=0 ; i<num; i++){
        arr[i] = 0;
    }

    for(int i=0; i<num; i++){
        cin>>arr[i];
    }

    selectionSort(arr,num);
    return 0;
}

void selectionSort(int arr[] , int num){

    for(int i=0 ; i< num; i++){
        int min = arr[i];
        int minIndex = i;
        for(int j= i+1; j < num;j++){
            if(min > arr[j]){
                min = arr[j];
                minIndex = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;

    }

    for(int i=0 ; i <num; i++){
        cout<<arr[i]<<" ";
    }

}