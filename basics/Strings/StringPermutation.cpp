#include <iostream>
using namespace std;

void printAllPermutation(char *in , int i){
    
    // base condition
    if(in[i] == '\0'){
        cout<<in<<endl;
        return ;
    }


    // recursive calls
    for(int j=i ; in[j]!= '\0' ; j++ ){
        swap(in[i] , in[j]);
        printAllPermutation(in,i+1);
        // backtracking
        swap(in[i],in[j]);
    }

}




int main(){

    char in[100];
    cin>>in;
    char out[100];

    printAllPermutation(in,0);


    return 0;
}