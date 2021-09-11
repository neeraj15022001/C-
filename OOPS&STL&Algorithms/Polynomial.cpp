#include <iostream>
using namespace std;

class Polynomial {
    int *degCoeff;
    int capacity;
    //    Private Method
    void resize() {
        int *newArr = new int[2*capacity];
        for (int i = 0; i <= capacity; i++) {
            newArr[i] = degCoeff[i];
        }
        for(int i = capacity+1; i < 2*capacity; i++) {
            newArr[i] = 0;
        }
        delete [] degCoeff;
        degCoeff = newArr;
        capacity *= 2;
    }
public:
    //    Default Constructor
    Polynomial() {
        cout << "Default Constructor called" << endl;
        capacity = 5;
        degCoeff = new int[capacity];
        for (int i = 0; i < capacity; i++) {
            degCoeff[i] = 0;
        }
    }
    //    Parametrized Constructor
    Polynomial(int capacity) {
        cout << "Parametrized Constructor called" << endl;
        this->capacity = capacity;
        degCoeff = new int[capacity];
        for (int i = 0; i < capacity; i++) {
            degCoeff[i] = 0;
        }
    }
    //    Copy Constructor
    Polynomial(Polynomial const &p) {
        cout << "Copy Constructor called" << endl;
        this->capacity = p.capacity;
        this->degCoeff = new int[p.capacity];
        for (int i = 0; i < p.capacity; i++) {
            this->degCoeff[i] = p.degCoeff[i];
        }
    }

    //    Methods
    void setCoefficient(int degree, int coefficient) {
        if(degree < capacity) {
            degCoeff[degree] = coefficient;
        } else {
            while(degree >= capacity) {
                resize();
                cout << "capacity: " << capacity << endl;
            }
            degCoeff[degree] = coefficient;
        }
    }
    void print() {
        for (int i = (capacity - 1); i >= 0; i--) {
            if (degCoeff[i] != 0) {
                if(i == 0) {
                    cout << degCoeff[i] << "x" << i;
                } else {
                    cout << degCoeff[i] << "x" << i << " + ";
                }
            }
        }
        cout << endl;
    }
    int getElement(int index) {
        if(index < capacity) {
            return degCoeff[index];
        } else {
            return 0;
        }
    }
    //    Operator Overloading
    void operator =(Polynomial const &p) {
        cout << "Copy Assignment Operator called" << endl;
        this->capacity = p.capacity;
        this->degCoeff = new int[p.capacity];
        for (int i = 0; i < p.capacity; i++) {
            this->degCoeff[i] = p.degCoeff[i];
        }
    }

    Polynomial operator +(Polynomial const &p2) {
        int newCapacity = max(this->capacity, p2.capacity);
        int j = min(this->capacity, p2.capacity);
        Polynomial p3(newCapacity);
        for (int i = 0; i < j; i++) {
            p3.setCoefficient(i, (this->degCoeff[i] + p2.degCoeff[i]));
        }
        if(this->capacity > p2.capacity) {
            for (int i = j; i < newCapacity; i++) {
                p3.setCoefficient(i, this->degCoeff[i]);
            }
        }
        if(p2.capacity > this->capacity) {
            for (int i = j; i < newCapacity; i++) {
                p3.setCoefficient(i, p2.degCoeff[i]);
            }
        }
        return p3;
    }

    Polynomial operator -(Polynomial const &p2) {
        int newCapacity = max(this->capacity, p2.capacity);
        int j = min(this->capacity, p2.capacity);
        Polynomial p3(newCapacity);
        for (int i = 0; i < j; i++) {
            p3.setCoefficient(i, (this->degCoeff[i] - p2.degCoeff[i]));
        }
        if(this->capacity > p2.capacity) {
            for (int i = j; i < newCapacity; i++) {
                p3.setCoefficient(i, this->degCoeff[i]);
            }
        }
        if(p2.capacity > this->capacity) {
            for (int i = j; i < newCapacity; i++) {
                p3.setCoefficient(i, p2.degCoeff[i]);
            }
        }
        return p3;
    }

    Polynomial operator *(Polynomial const &p2) {
        int newCapacity = this->capacity + p2.capacity;
        Polynomial p3(newCapacity);

        for(int i = 0 ; i < this->capacity; i++) {
            for(int j = 0; j < p2.capacity; j++) {
                int deg = i + j;
                int coef =  p3.getElement(deg) + (this->degCoeff[i] * p2.degCoeff[j]);
                p3.setCoefficient(deg, coef);
            }
        }
        return p3;
    }
};
