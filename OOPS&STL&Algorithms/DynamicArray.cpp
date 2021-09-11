#include <iostream>
using namespace std;

class DynamicArray {
    int *data;
    int nextIndex;
    int size;

//    Private Method
    void resize() {
        int *newArr = new int[2*size];
        for (int i = 0; i <= size; i++) {
            newArr[i] = data[i];
        }
        delete [] data;
        data = newArr;
        size *= 2;
    }

public:
    //    Default Constructor
    DynamicArray() {
        cout << "Default Constructor called" << endl;
        size = 5;
        data = new int[size];
        nextIndex = 0;
    }
    //    Parametrized Constructor
    DynamicArray(int size) {
        cout << "Parametrized Constructor called" << endl;
        this->size = size;
        data = new int[size];
        nextIndex = 0;
    }
    //    Copy Constructor
    DynamicArray(DynamicArray const &d2) {
        cout << "Copy Constructor called" << endl;
        this->size = d2.size;
        this->nextIndex = d2.nextIndex;
        this->data = new int[d2.size];
        for (int i = 0; i <= d2.size; i++) {
            this->data[i] = d2.data[i];
        }
    }

    //    Methods

    void addElement(int value) {
        if(nextIndex < size) {
            data[nextIndex] = value;
            nextIndex++;
        }
        else {
            resize();
            data[nextIndex] = value;
            nextIndex++;
        }
    }

    int getValueAtCurrentIndex(int index) const {
        if(index < nextIndex) {
            return data[index];
        }
        else {
            return -1;
        }
    }
    int getCurrentSize() const {
        return (nextIndex);
    }
    void changeValue(int index, int value) {
        if(index < nextIndex) {
            data[index] = value;
        }
        else if(index == nextIndex) {
            addElement(value);
        }
    }
    void print() const  {
        for (int i = 0; i < nextIndex; i++) {
            cout << data[i] << " ";
        }
        cout << endl;
    }

//    Operator Overloading
    void operator =(DynamicArray const &d2) {
        cout << "Copy Assignment Operator called" << endl;
        this->size = d2.size;
        this->nextIndex = d2.nextIndex;
        this->data = new int[d2.size];
        for (int i = 0; i <= d2.size; i++) {
            this->data[i] = d2.data[i];
        }
    }

};
