#include <iostream>
using namespace std;

int main(){
    char ch;

    int x=0,y=0;
    do{
        ch = cin.get();

        if(ch == 'E'){
            x++;
        }else if(ch == 'N'){
            y++;
        }else if(ch == 'W'){
            x--;
        }else if(ch== 'S'){
            y--;
        }
        

    }while(ch != '\n');
    // pringtin the output

    if(x>=0 && y>=0){
        int i= x , j=y;
        while(i>0){
            cout<<"E";
            i--;
        }
        while(j>0){
            cout<<"N";
            j--;
        }
        
    }
    if(x<0 && y>0){
        int i= abs(x) , j=y;
        while(i>0){
            cout<<"W";
            i--;
        }
        while(j>0){
            cout<<"N";
            j--;
        }
    }
    if(x<0 && y <0){
        int i= abs(x) , j= abs(y);
        while(i>0){
            cout<<"W";
            i--;
        }
        while(j>0){
            cout<<"S";
            j--;
        }
    }
    if(x>0 && y <0){
        int i= x , j= abs(y);
        while(i>0){
            cout<<"E";
            i--;
        }
        while(j>0){
            cout<<"S";
            j--;
        }
    }



    return 0;
}