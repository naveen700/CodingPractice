#include <iostream>
using namespace std;
void nowSayMyName(int );
int main(){
    int times;
    cin>>times;

    while(times > 0){
        int num;
        cin>>num;
        nowSayMyName(num);
        times--;
    }
}

void nowSayMyName(int num){
    if(num < 10){
        cout<<"What an obedient servant you are!"<<endl;

    }else{
        cout<<"-1"<<endl;
    }

}