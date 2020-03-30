#include <iostream>
using namespace std;
void checkIfTriangleValid(int , int ,int);
int main(){
    int times;

    cin>>times;

    while(times>0){
        int ang1,ang2 ,ang3;
        cin>>ang1>>ang2>>ang3;
        checkIfTriangleValid(ang1, ang2,ang3);


        times--;
    }


    return 0;
}

void checkIfTriangleValid(int a, int b , int c){

    if(a+b+c == 180){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}