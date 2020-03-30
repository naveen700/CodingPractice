#include <iostream>
using namespace std;


int main(){

    int num;
    cin>>num;
    int a[num];
    for(int i=0; i<num;i++){
        a[i] = 0;
    }
    for(int i=0;i<num; i++){

        cin>>a[i];
    }

    bool flag= true;
    for(int i=0 ; i< num ; i++){

        for(int j=0 ;j<num-i; j++){
            if(a[j] > a[j+1] ){
                flag = false;
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp; 
            }
        }
        if(flag){
            break;
        }
    }

    for(int i=0 ; i< num ; i++){
        cout<<a[i]<<endl;
    }
    return 0;
}

