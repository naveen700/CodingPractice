#include <iostream>
using namespace std;
#include <stack>

void insertInReverseOrder(stack <int> &s ,int x){
    if(s.empty()){
        s.push(x);
        return;
    }
    int y = s.top();
    s.pop();

    insertInReverseOrder(s,x);

    s.push(y);
    return;

}


void reverseStack(stack <int> &s){
    if(s.empty()){
        return ;
    }

    int x = s.top();
    s.pop();
    // recursively empty all stack
    reverseStack(s);

    // insert elementes now
    insertInReverseOrder(s,x);

}


int main(){

    stack <int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    // lets reverse the stack

    reverseStack(s);

    while(!s.empty()){
        int data = s.top();
        cout<<data<<endl;
        s.pop();

    }

    return 0;
}