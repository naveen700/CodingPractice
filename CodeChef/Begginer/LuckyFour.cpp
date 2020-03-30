#include<iostream>
using namespace std;
void calNumberOfFours(int);

int main(){

    int times;
    cin>>times;

    while(times > 0){
        int num;
        cin>>num;
        calNumberOfFours(num);        
        times--;
    }


    return 0;
}

void calNumberOfFours(int num){
    int count = 0;
    int rem = 0;

    while(num>0){
        rem = num%10;

        if(rem  == 4){
            count++;
        }
        num = num/10;
    }

    cout<<count<<endl;

}