#include <iostream>

int power(int base , int exponent){
    int result =1;
    while(exponent>0){
        result *= base ;
        exponent--;
    }
    return result;
}
using namespace std;

int main(){
    
    int num,binary;

    cin>>num;

    // logic for binary to decimal conversion
    for(int i=1 ; i<= num; i++){
        cin>>binary;

        int count =0;
        int rem=0,dec=0;

        while(binary >0){
            rem = binary%10;
            if(rem  == 1){
                dec = dec + rem*power(2,count);
                count++;
            }else{
                count++;
            }
            binary = binary/10;
        }

        cout<<dec<<endl;
    }



    return 0;
}