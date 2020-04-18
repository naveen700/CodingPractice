#include <iostream>
#include <String.h>
using namespace std;

string s[100];
int count =0;
// only those present which are in order
void printAllSubSequence(string c, int len){

    for(int i=0; i <len; i++){
        for(int j=i;j<len;j++){
            for(int k=i; k<=j; k++){
                s[count] = s[count] + c[k];
            }
            count++;
        }
    }

    for(int i=0; i <=count;i++){
        cout<<s[i]<<" ";
    }

}



int main(){
    string c = "ABC";  


    printAllSubSequence(c,3);

    return 0;
}