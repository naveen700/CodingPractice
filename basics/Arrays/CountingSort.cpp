#include <iostream>
#include <climits>
using namespace std;

//  count sort doesnot work for negative values.
int main(){ 
    int n;
    cin>>n;
    int arr[n],max=INT_MIN;

    // reaadin array
    for(int i=0; i< n; i++){
        cin>>arr[i];
        if(arr[i] > max){
            max = arr[i];
        }
    }

    // in count sort we count the number of occurence of element when its done just print the frequency array according to the count.
    int freq[max+1];
    for(int i=0; i< max+1; i++){
        freq[i] = 0;
    }
    // counting occurence of each number in frequency array
    for(int i=0; i< n; i++){

        freq[arr[i]] = freq[arr[i]] + 1;

    }

    // printing the freq array

    for(int i=0; i <= max ; i++){
        for(int j=0; j < freq[i] ; j++ ){
            cout<<i<<" ";
        }
    }

    return 0;
}