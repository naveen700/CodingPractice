#include <iostream>
using namespace std;

int main(){ 

    float celsius = 0;
    int init=0,final=0,step=0;
    cout<<"Enter initial , final, step value for table";
    cin>>init>>final>>step;

    for(int i=init; i <= final; i=i+step){

        cout<<i<<"   ";
        celsius = (5/9.0)*(i-32);
        cout<<celsius <<"  ";

        cout<<endl;
    }



    return 0;
}
