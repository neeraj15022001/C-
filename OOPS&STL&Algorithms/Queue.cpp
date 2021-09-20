
#include <iostream>
using namespace std;
class Queue {
    int *data;
    int front;
    int end;
    int capacity;

    void resize() {
        int *newArr = new int[2 * this->capacity];
        for (int i = 0; i <= this->end; ++i) {
            newArr[i] = data[i];
        }
        delete[] data;
        data = newArr;
        this->capacity *= 2;
    }

public:
    Queue() {
        data = new int[5];
        front = -1;
        end = -1;
        capacity = 5;
    }

    Queue(int capacity) {
        data = new int[capacity];
        front = -1;
        end = -1;
        this->capacity = capacity;
    }

    Queue(Queue const &q) {
        int *newArr = new int[q.capacity];
        for (int i = 0; i < q.capacity; ++i) {
            newArr[i] = q.data[i];
        }
        delete[] this->data;
        this->data = newArr;
        this->front = q.front;
        this->end = q.end;
        this->capacity = q.capacity;
    }

    void print() {
        for (int i = this->front; i <= this->end; ++i) {
            cout << data[i] << " ";
        }
        cout << endl;
    }

    bool isEmpty() {
        if(end == -1) {
            front = -1;
        }
//        cout << "front: " << front << " end: " << end << endl;
        return (end == -1);
    }
    int peek() {
        if(!isEmpty()) {
            return data[front];
        } else {
            return -1;
        }
    }
    void enqueue(int element) {
        if(end >= this->capacity) {
            resize();
        }
        if(isEmpty()) {
            front++;
        }
        end++;
        data[end] = element;
    }

    int dequeue() {
        if(isEmpty()) {
//            cout << "end: " << end << endl;
            front = -1;
            return -1;
        }
        int value = data[front];
        int *newArr = new int[this->capacity];
        for (int i = 1; i <= end; ++i) {
            newArr[i-1] = data[i];
        }
        end--;
        delete [] data;
        this->data = newArr;
        return value;
    }
};