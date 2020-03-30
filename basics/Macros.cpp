#include <iostream>
using namespace std;

// macros are defined here usually 
#define pie 3.14
#define semicolon ;


int main(){
    float radius = 5.0;
    float cir = 2*pie*radius semicolon
  
    // constant must be initialized at the time of declaratioin. like this it will give error
    const int x;
    x=5;

    cout<<cir;
    return 0;
}