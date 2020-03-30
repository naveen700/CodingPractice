#include <iostream>
using namespace std;

int main(){
    int p,r,t;
    float si;
    cout<<"Please Enter Principal Amount\n";
    cin>>p;

    cout<<"Please Enter Rate of Interest"<<endl;
    cin>>r;

    cout<<"Please Enter time\n";
    cin>>t;

    si= (p*r*t)/100.0;
    
    cout<<"Simple interest is "<<si<<"\n";
    return 0;

}