#include <iostream>
using namespace std;
int main(){

    int x=5;
    // y is refrence here to x , it will not create its own bucket . but will refer to  same x bucket.
    int &y = x;

    cout<<y<<"y is";

    return 0;
}