#include <iostream>
#include <array>
using namespace std;
class Stack {
    int *data;
    int top;
    int capacity;

public:
    Stack() {
        this->capacity = 10;
        this->data = new int[this->capacity];
        this->top = -1;
    }

    Stack(int capacity) {
        this->capacity = capacity;
        this->data = new int[this->capacity];
        this->top = -1;
    }

    bool isEmpty() {
        return (top == -1);
    };

    int size() {
        return (top + 1);
    };

    int topValue() {
        if(!isEmpty()) {
            return data[top];
        }
        return -1;
    };

    void push(int element) {
        if (top < this->capacity) {
            cout << "Capacity "  << this->capacity << " Top " << top << endl;
            top++;
            data[top] = element;
        } else {
            int *newArr = new int[2 * this->capacity];
            for (int i = 0; i <= this->size(); ++i) {
                newArr[i] = data[i];
            }
            this->capacity *= 2;
            delete [] data;
            cout << "Capacity "  << this->capacity << " Top " << top << endl;
            this->data = newArr;
            top++;
            data[top] = element;
        }
    }

    int pop() {
        int poppedElement = -1;
        if(!isEmpty()) {
            poppedElement = data[top];
            data[top] = 0;
            top--;
        }
        return poppedElement;
    }

    void print() {
        for(int i = 0; i < this->size(); i++) {
            cout << data[i] << " ";
        }
        cout << endl;
    }
};