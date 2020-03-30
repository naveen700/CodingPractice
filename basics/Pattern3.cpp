#include<iostream>
void printPattern(int );
using namespace std;

int main(){
    int num;
    cin>>num;


    printPattern(num);


    return 0;
}

void printPattern(int num){
    int row=1;
    while(row <= num){
        // loop for non inverted triangle;
        int i = 1;
        while(i<= row){
            cout<<"*";
            i++;
        }

        cout<<" ";
        // loop for inverted triable
        int sec = num-row+1;
        while(sec >= 1){
            cout<<"*";
            sec--;
        }
        cout<<" ";
        // loop for inverted again
        sec = num-row+1;
        while(sec >= 1){
            cout<<"*";
            sec--;
        }
         cout<<" ";
        i = 1;
        while(i<= row){
            cout<<"*";
            i++;
        }

        // loop for non inverted triangle
        
        cout<<endl;
        row++;





    }

}