#include <iostream>
using namespace std;

void calculateMaxSum(int len){
    int arr[len][len] = {0};
    // input array

    for(int i=0; i<len; i++){
        for(int j=0; j<=i; j++){
            cin>>arr[i][j];
        }
    }

    for(int i =len-1; i>=0; i--)
    {
        for(int j=0; j<=i-1;j++ ){
            int sum = max(arr[i][j] , arr[i][j+1]);
            arr[i-1][j] = arr[i-1][j] + sum;
        }
    }
    cout<<arr[0][0]<<endl;
}

int main(){
    int cases;
    cin>>cases;

    while(cases  >0){
        int len; 
        cin>>len;
        calculateMaxSum(len);
        cases--;
    }


    return 0;
}