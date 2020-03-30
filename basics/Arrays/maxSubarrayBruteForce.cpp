#include <iostream>
#include <climits>
using namespace std;
void maxSubArraySum(int [] , int);

// max subarray sum :- subarray of array which have maximum sum;
int main(){
    int num;
    cin>>num;

    int arr[num];

    for(int i=0 ; i< num ; i++){
        cin>>arr[i];
    }

    maxSubArraySum(arr,num);
    return 0;
}

void maxSubArraySum(int arr[], int num){

    int sum=0, max = INT_MIN;
    for(int i=0; i< num ; i++){
        for(int j=i; j < num ; j++){
            sum = 0;
            for(int k=i; k <=j ; k++){
                sum = sum + arr[k];
            }
        if(sum > max){
            max = sum;
            
        }
        }
    }

    cout<<"Max subarray sum is"<<max;
}