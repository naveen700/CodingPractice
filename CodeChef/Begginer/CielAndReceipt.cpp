#include <iostream>

using namespace std;
int minOrders(int );
int calculateOrders(int );
int power(int , int);
int main(){

    int times;
    cin>>times;

    while(times > 0){
        int num;
        cin>>num;
        int order =  minOrders(num);
        cout<<order<<endl;
        times--;
    }
    return 0;
}

int minOrders(int num){

    int count = 0;

    while(num > 0){
        num = calculateOrders(num);
        count++;
        
    }
    return count;
}

int calculateOrders(int num){
    int i = 0;

    while( power(2,i) <= num && power(2,i) <= 2048 ){
        i++;
    }

    return num-power(2, i-1);
}

int power(int base ,int exp){
    int res = 1;

    while(exp >0){
        res = res* base;
        exp--;
    }
    return res;
}