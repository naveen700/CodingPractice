#include <iostream>
using namespace std;

class node
{
    // properties are variable defined above here. private variable can be defined here above public

public:
    int data;
    node *next;

    //
    node(int x)
    {
        data = x;
        next = NULL;
    }
};

class LinkedList
{
    //  if we dont define as public then it will by defaullt private.
public:
    node *head;
    node *tail;

    LinkedList()
    {
        head = NULL;
        tail = NULL;
    }

    void insertionAtFront(int data)
    {
        node *n = new node(data);
        if (head == NULL)
        {
            head = n;
            tail = head;
        }
        else
        {
            n->next = head;
            head = n;
        }
    }
    void insertionAtLast(int data)
    {
        //  new here mean creating in heap memory also (dynamic memory)
        node *n = new node(data);
        if (head == NULL)
        {
            head = n;
            tail = head;
        }
        else
        {
            tail->next = n;
            tail = n;
        }
    }

    void print()
    {
        node *temp = head;

        while (temp != NULL)
        {
            cout << temp->data << "-->";
            temp = temp->next;
        }
    }

    int length()
    {
        int length = 0;
        node *temp = head;

        while (temp != NULL)
        {
            length++;
            temp = temp->next;
        }

        return length;
    }

    bool isElementExist(int data)
    {
        node *temp = head;

        while (temp != NULL)
        {
            if (temp->data == data)
            {
                return true;
            }

            temp = temp->next;
        }

        return false;
    }

    void insertionAtPosition(int data, int pos)
    {
        if (pos == 0)
        {
            insertionAtFront(data);
        }
        else
        {

            int count = 0;
            node *temp = head;
            node *n = new node(data);
            while (count < pos - 1)
            {
                count++;
                temp = temp->next;
            }
            n->next = temp->next;
            temp->next = n;
        }
    }

    void deleteAtFront()
    {
        if (head == NULL)
        {
            return;
        }

        node *n = head;
        head = head->next;
        delete n;
    }

    void deleteAtLast()
    {
        node *temp = head;

        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        node *temp2 = tail;
        tail = temp;
        delete temp2;
    }

    node *findMid()
    {
        node *slow = head;
        node *fast = head;

        while (fast != NULL && fast->next != NULL)
        {
            fast = fast->next->next;
            slow = slow->next;
        }
        return slow;
    }

    void deleteAtPosition(int pos)
    {
        int count = 1;
        node *temp = head;
        if (pos == 1)
        {
            deleteAtFront();
            return;
        }
        while (count < pos - 1)
        {
            temp = temp->next;
            pos--;
        }

        node *temp2 = temp->next;
        cout << "deleted data is" << temp2->data << endl;
        temp->next = temp2->next;
        delete temp2;
    }

    node *mergeTwoSortedLinkList(node *a, node *b)
    {
        // base case
        if (a == NULL)
        {
            return b;
        }
        if (b == NULL)
        {
            return a;
        }

        node *c;
        if (a->data < b->data)
        {
            c = a;
            c->next = mergeTwoSortedLinkList(a->next, b);
        }
        if (a->data > b->data)
        {
            c = b;
            c->next = mergeTwoSortedLinkList(a, b->next);
        }
        return c;
    }

    bool findCycleExistOrNot()
    {
        node *slow = head;
        node *fast = head->next;

        while (fast == slow)
        {
            if (fast != NULL)
            {
                return false;
            }
            fast = fast->next->next;
            slow = slow->next;
        }
    }

    bool findCycleExistsOrNot()
    {
        node *slow = head;
        node *fast = head->next;

        while (fast != slow)
        {
            if (fast != NULL)
            {
                return false;
            }
            fast = fast->next->next;
            slow = slow->next;
        }
        return true;
    }

    int findCycleWhereExist()
    {
        node *slow = head;
        node *fast = head->next;

        while (fast != slow)
        {
            fast = fast->next->next;
            slow = slow->next;
        }
        slow = head;
        int count = 0;
        while (fast != slow)
        {
            fast = fast->next;
            slow = slow->next;
            count++;
        }

        cout << "Cycle exist at position" << count;
        return count;
    }

    node * reverseLinkList()
    {
        node * prev= NULL;
        node * curr= head; ;
        node * myNext = head;

        while(myNext != NULL){
            myNext = myNext->next;
            //  breaking bond here in below step
            curr->next = prev;
            prev = curr;
            curr = myNext;
        }
        return prev;

    }
};
