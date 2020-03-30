#include <iostream>
using namespace std;


int main(){
    int first, last, step;

    cin>>first>>last>>step;

    for(int i=first; i<= last ; i= i+step){
        int cel = (5/9.0)*(i-32);
        cout<<i<<"\t";
        cout<<cel<<endl;
    }



    return 0;
}