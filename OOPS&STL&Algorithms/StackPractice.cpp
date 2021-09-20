class StackPractice {
    int *data;
    int top;
    int capacity;

    void resize() {
        int *newArr = new int[2 * this->capacity];
        for (int i = 0; i < this->capacity; ++i) {
            newArr[i] = data[i];
        }
        delete[] data;
        data = newArr;
        this->capacity *= 2;
    }

public:
//    Default Constructor
    StackPractice() {
        data = new int[5];
        top = -1;
        capacity = 5;
    }

//    Parametrized Constructor
    StackPractice(int capacity) {
        data = new int[capacity];
        top = -1;
        this->capacity = capacity;
    }

//    Copy Constructor
    StackPractice(StackPractice const &sp) {
//    Deep Copy
        int *newArr = new int[sp.capacity];
        for (int i = 0; i < sp.capacity; ++i) {
            newArr[i] = sp.data[i];
        }
        delete[] data;
        data = newArr;
        this->top = sp.top;
        this->capacity = sp.capacity;
    }

//    Methods

    int pop() {
        if(top == -1) {
            return -1;
        }
        int value = data[top];
        data[top] = 0;
        top--;
        return value;
    }
    void push(int element) {
        top++;
        if(top >= this->capacity) {
            resize();
        }
        data[top] = element;
    }
    int getCapacity() {
        return this->capacity;
    }

    bool isEmpty() {
        return (this->top == -1);
    }

    int getTop() {
        return this->top;
    }

    void print() {
        for (int i = 0; i <= this->getTop(); ++i) {
            cout << data[i] << " ";
        }
        cout << endl;
    }
};