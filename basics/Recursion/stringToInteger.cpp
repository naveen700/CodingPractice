#include <iostream>
#include <cmath>
using namespace std;

int strToInteger(char s[],int i ,int n){
    if(s[i] == '\0'){
        return 0;
    }

    int num = (s[i] - '0')*pow(10,n-i-1) + strToInteger(s,i+1,n);
    return num;
}



int main(){
    char s[] = "123456";
    int n = sizeof(s)/sizeof(char);
    
    int num = strToInteger(s,0,n-1);
    cout<<num;
}