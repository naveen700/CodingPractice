#include <iostream>
using namespace std;
void secondLargest(int , int , int);
int main(){
    int times;
    cin>>times;

    while(times > 0){
        int a, b, c;
        cin>>a>>b>>c;
        secondLargest(a,b,c);
        times--;
    }
}

void secondLargest(int a, int b , int c){
    if( (a>b && a<c) || (a>c && a<b)){
        cout<<a<<endl;
    }else if((b>a && b < c) || (b<a && b > c)){
        cout<<b<<endl;
    }else{
        cout<<c<<endl;
    }
}