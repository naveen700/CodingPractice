#include <iostream>
using namespace std;
void maxLeftOvers(int);
int main(){

    int times;
    cin>>times;

    while(times>0){
        int num;
        cin>>num;
        maxLeftOvers(num);

        times--;
    }



    return 0;
}

void maxLeftOvers(int num){

    int packSize = (num)/2+1;

    cout<<packSize<<endl;
}