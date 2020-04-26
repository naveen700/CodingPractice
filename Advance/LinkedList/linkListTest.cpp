#include <iostream>

#include "LinkedList.h"
using namespace std;

void printMergeList(node *head){
    while(head  != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}


int main(){

    LinkedList l1 ;
    LinkedList l2;
    // l.insertionAtFront(1);
    // l.insertionAtFront(2);
    // l.insertionAtFront(3);
    // l.insertionAtFront(4);
    // l.insertionAtFront(5);
    // l.print();
    // cout<<endl;
    // node * mid = l.findMid();
    // cout<<"mid is " <<mid->data<<endl;

    // // l.deleteAtPosition(3);
    // l.print();

    l1.insertionAtLast(1);
    l1.insertionAtLast(4);

    l2.insertionAtLast(2);
    l2.insertionAtLast(5);
    l2.insertionAtLast(7);

    node *merged = l1.mergeTwoSortedLinkList(l1.head, l2.head);
    printMergeList(merged);
    return 0;
}
