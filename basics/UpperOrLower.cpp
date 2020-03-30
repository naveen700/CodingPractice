#include <iostream>
using namespace std;

// example of typecasting
int main(){

    // this is implicit casting;
    // char c = 'A';
    // int x=66;

    // // this is explicit casting
    // float a = 8.787999;
    // int i = int(a);

    // cout<< i<<endl;


    // compare char is lower case or not;
    char c;
    cin>>c;

    int ascii = int(c);

    if(ascii >64 && ascii <= 92){
        cout<<"Char is Upper case";
    }
    if(ascii >= 98 && ascii <= 123){
        cout<<"Char is Lower case";
    }


    return 0;
}