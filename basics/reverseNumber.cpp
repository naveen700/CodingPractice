#include <iostream>
using namespace std;
void reverseNumber(int );


int main(){
    int num;
    cout<<"Enter number to be reverse";
    cin>>num;

    reverseNumber(num);

    return 0;
}

void reverseNumber(int num){
    int rev = 0;
    int rem=0;
    while(num>0){

        rem = num%10;
        rev = rem + rev*10;
        num = num/10;
    }

    cout<<"Reverse Number is "<< rev<<endl;

}