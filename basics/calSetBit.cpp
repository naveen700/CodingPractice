#include <iostream>
void calculateSetBit(int num);

using namespace std;

int main(){

    int num;
    
    cin>>num;

    calculateSetBit(num);

    return 0;

}

void calculateSetBit(int num){
    int count =0;
       while(num>=1){
           if(num%2 != 0){
               count++;
           }
        num = num/2;

    }

    cout<<"Number of set bits are "<<count<<endl;
}