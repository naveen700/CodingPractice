#include <iostream>
using namespace std;

#include "LinkedList.h"

void printReverseList(node *head){
    while(head  != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}

int main(){
    LinkedList l1 ;
    l1.insertionAtLast(1);
    l1.insertionAtLast(2);
    l1.insertionAtLast(3);
    l1.insertionAtLast(4);
    l1.insertionAtLast(5);
    l1.print();
    cout<<endl;
    node * reverse = l1.reverseLinkList();
    printReverseList(reverse);

}