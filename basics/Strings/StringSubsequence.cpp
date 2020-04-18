#include <iostream>
using namespace std;

void printAllSubsequence(char *in , char *out , int i, int j){
    // base case
    if(in[i] == '\0'){
        out[j] = '\0';
        cout<<out<<endl;
        return ;
    } 
    // recursive case
    // include the curent char
    out[j] = in[i];
    printAllSubsequence(in ,out, i+1,j+1);

// exclude the current char

    printAllSubsequence(in,out, i+1,j);


}




int main(){
    char in[100];
    cin>>in;

    char out[100];
    printAllSubsequence(in,out,0,0);



    return 0;
}