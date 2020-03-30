#include <iostream>
using namespace std;
void sortInLinearTime(int [],int);

int main(){
    int len;
    cin>>len;

    int arr[len];

    for(int i=0; i<len;i++){
        cin>>arr[i];
    }


    sortInLinearTime(arr,len);

}

void sortInLinearTime(int arr[] , int len){
    int a=0, b=0 ,c=0;

    // to count no of zeroes ,ones, twos
    for(int i =0; i <len;i++){
        if(arr[i] == 0){
            a++;
        }else if(arr[i] == 1){
            b++;
        }else{
            c++;
        }

    }

    //print array
    for(int i=0; i<a;i++){
        cout<<"0"<<endl;
    }
    for(int i=0; i<b;i++){
        cout<<"1"<<endl;
    }
    
    for(int i=0; i<c;i++){
        cout<<"2"<<endl;
    }

}