#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a number to be check for prime or not ";
    cin>>num;
    
    int i=2;
    if(i<=1){
        cout<<"This Number is not prime";
    }else{
        while(i<num)
            {
                if(num%i == 0){
                    cout<<"This Number is not prime";
                    break;
                }

                i++;
            }
    }
    if(i == num){
        cout<<"Number is prime ";
    }
    return 0;
}