#include <iostream>
using namespace std;
int main(){

    char ch='A';
    char *c= &ch;

    // only char pointer behave in diffrent way instead of printing address it prints A and then print garbage and so on until it finds null value.
    cout<<c<<endl;
    cout<<&ch<<endl;

    // we can fool compiler by type casting pointer into diffrent type;
    cout<<(void *)&ch<<endl;
    cout<<(float *)&c<<endl;
    return 0;

}