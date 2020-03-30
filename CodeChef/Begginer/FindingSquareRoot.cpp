#include <iostream>
using namespace std;
void findSquareRoot(int);
int main(){

    int times;
    cin>>times;

    while(times > 0){
        int num;
        cin>>num;
        findSquareRoot(num);
        times--;
    }




    return 0;
}

void findSquareRoot(int num){
    int root = 1;

    while(root*root < num){
        root = root + 1;
    }
    if(root*root > num){
        root--;
    }
    cout<<root<<endl;

}