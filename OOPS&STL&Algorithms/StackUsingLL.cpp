#include <iostream>
#include "Node.cpp"
using namespace std;
class StackUsingLL {
    Node *head;
    int size;
    Node *tail;

public:
    StackUsingLL() {
        this->head = NULL;
        this->size = 0;
        this->tail = NULL;
    }

    bool isEmpty() {
        return (size == 0);
    }

    int top() {
        if(size != 0)
            return this->tail->value;
        return -1;
    };

    int sizeOfStack() {
        return this->size;
    }

    void push(int element) {
        Node n;
        n.value = element;
        cout << head << &n << endl;
        if(head == NULL) {
            head = &n;
            tail = &n;
        } else {
            head->next = &n;
            tail = tail->next;
        }
        size++;
    }
     void print() {
        Node *temp = head;
        int i = 0;
        while(i <= size) {
            cout << temp->value << " ";
            temp = temp->next;
            i++;
        }
        cout << endl;
    }
};