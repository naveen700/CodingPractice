#include <iostream>
using namespace std;
void calcMinMaxEntry(int,int);
int main(){
    int times;
    cin>>times;

    while(times>0){
        int num1, num2;
        cin>>num1>>num2;

        calcMinMaxEntry(num1, num2);

        times--;
    }


    return 0;
}

void calcMinMaxEntry(int num1, int num2){
    if(num1> num2){
        cout<<num1<<" ";
    }else{
        cout<<num2<<" ";
    }
    cout<<(num1+num2)<<endl;

}