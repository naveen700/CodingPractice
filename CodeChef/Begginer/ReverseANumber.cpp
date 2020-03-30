#include <iostream>
using namespace std;
void findReverseOfNumber(int);

int main(){
    int times; 
    cin>>times;

    while(times > 0){
        int num;
        cin>>num;
        findReverseOfNumber(num);
        times--;
    }




    return 0;
}

void findReverseOfNumber(int num){
    int res=0 , rem=0;
    while(num > 0){
        rem = num%10;
        res = rem + res*10;
        num = num/10;
    }
    cout<<res<<endl;
}