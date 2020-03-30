#include <iostream>
using namespace std;

int main(){
    char ch;
    int digit=0,alpha=0, symbols=0,space=0;

    ch= cin.get();

    while(ch!= '$'){

        if(ch >= 48 && ch <= 57){
            digit++;
        }else if(ch == 32){
            space++;
        }else if((ch >= 65 && ch <= 90 )  || (ch>=92 && ch <= 122)){
            alpha++;
        }else{
            symbols++;
        }
        ch = cin.get();
    }


}