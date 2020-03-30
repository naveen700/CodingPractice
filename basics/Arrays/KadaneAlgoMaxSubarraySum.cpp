#include <iostream>
#include <climits>
using namespace std;
void maxSubArraySum(int [] , int);

// kadane is very effecient way to solve maxsubarraysum which it does in o(n) complexity.
// max subarray sum :- subarray of array which have maximum sum;

int main(){
    int times;
    cin>>times;

    while(times > 0){
        int num;
        cin>>num;

    int arr[num];

    for(int i=0 ; i< num ; i++){
        cin>>arr[i];
    }

    maxSubArraySum(arr,num);
        times--;
    }
    return 0;
}

void maxSubArraySum(int arr[], int num){

    int max_sum=INT_MIN, cur_sum = 0;
    for(int i=0; i< num ; i++){
        cur_sum = cur_sum + arr[i];
        if(cur_sum  < 0){
            cur_sum = 0; 
        }
        if(cur_sum > max_sum){
            max_sum = cur_sum;
        }
    }

    cout<<max_sum<<endl;
}