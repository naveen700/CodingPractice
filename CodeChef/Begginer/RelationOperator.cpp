#include <iostream>
using namespace std;
void findRelation(int , int);
int main(){
    int times;
    cin>>times;

    while(times > 0){
        int num1,num2;
        cin>>num1>>num2;
        findRelation(num1,num2);
        times--;
    }
}

void findRelation(int num1, int num2)
{
    if(num1>num2) cout<<">"<<endl;
    if(num1 < num2) cout<<"<"<<endl;
    if(num1 == num2) cout<<"="<<endl;
}