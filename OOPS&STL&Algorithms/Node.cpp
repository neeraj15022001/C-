#include <iostream>
using namespace std;
class Node {
public:
    int value;
    Node *next;
    Node() {
        this->next = NULL;
        this->value = 0;
    }
};