#include <iostream>

using namespace std;

#include "Queue.cpp"
//#include "StudentTwo.cpp"
//#include<array>
//#include <vector>
//#include <deque>
//#include <list>
//#include <stack>
//#include <queue>
//#include <set>
//#include <map>
//#include <algorithm>
//int main() {
////    Create objects statically
//    Student s1;
//    Student s2(20);
//    s1.display();
//    s2.display();
//    s1.rollNumber = 101;
//    s1.setAge(24);
//    s1.display();
//    cout << s1.getAge() << endl;
////    Create objects dynamically
//    Student *s3 = new Student(25,1011);
//    s3 -> display();
//    s3 -> rollNumber = 102;
//    s3 ->setAge(25);
//    s3 -> display();
//    cout << s3 -> getAge() << endl;
//    Student s4(s2);
//    s4.display();
//    Student s5(*s3);
//    s5.display();
//    Student *s6 = new Student(s1);
//    s6 -> display();
//    Student *s7 = new Student(*s3);
//    s7 -> display();
//    s5 = *s6;
//    s5.display();
//    s6 -> display();
//    delete s3;
//    delete s6;
//    delete s7;
//    return 0;
//}

//int main() {
//    Fraction f1(10,2);
//    Fraction f2(15,4);
//    Fraction const f3(50,50);
//    cout << f3.getDenominator() << " " << f3.getNumerator() << endl;
//    return 0;
//}

//int main() {
//    ComplexNumber c1(4,5);
//    ComplexNumber c2(1,2);
////    c1.plus(c2);
//    c1.multiply(c2);
//    c1.print();
//    c2.print();
//    return 0;
//}

//int main() {
////    char name[] = "abcd";
////    StudentTwo s1(10, name, 20);
////    s1.display();
////    StudentTwo s2(s1);
////    s2.name[0] = 'x';
////    s2.display();
////    s1.display();
////    StudentTwo s1{};
////    cout << s1.age << " " << s1.rollNumber << endl;
//    cout << StudentTwo :: totalStudents << endl;
////    name[3] = 'e';
////    StudentTwo s2(20, name);
////    s2.display();
////    s1.display();
//    return 0;
//}

//int main() {
//
////    Array
////    array<int,4> array1 = {1,2,3,4};
////    int size = array1.size();
////    for(int i = 0; i < size; i++) {
////        cout << array1[i] << endl;
////    }
////    cout << "Array Element at 2nd Index: " << array1.at(2) << endl;
////    cout << "Is Array Empty: " << array1.empty() << endl;
////    cout << "Array front element: " << array1.front() << endl;
////    cout << "Array Last Element: " << array1.back() << endl;
//// --------------------------------------------------------------------------------------------------------------------
////    Vector
////    vector<int> v;
////    cout << "Capacity : " << v.capacity() << endl;
////    cout << "Size : " << v.size() << endl;
////    v.push_back(10);
////    cout << "Capacity : " << v.capacity() << endl;
////    cout << "Size : " << v.size() << endl;
////    v.push_back(20);
////    cout << "Capacity : " << v.capacity() << endl;
////    cout << "Size : " << v.size() << endl;
////    v.push_back(30);
////    cout << "Capacity : " << v.capacity() << endl;
////    cout << "Size : " << v.size() << endl;
////
////    cout << "Element at 2nd Index : " << v.at(2) << endl;
////    cout << "Front Element: " << v.front() << endl;
////    cout << "Back Element: " << v.back() << endl;
////    cout << "Before Pop" << endl;
////    for(int i:v) {
////        cout << i << " ";
////    }
////    cout << endl;
////    v.pop_back();
////    cout << "After Pop" << endl;
////    for(int i:v) {
////        cout << i << " ";
////    }
////    cout << endl;
////
////    cout << "Before Clear Capacity : " << v.capacity() << endl;
////    cout << "Before Clear Size : " << v.size() << endl;
////    v.clear();
////    cout << "After Clear Capacity : " << v.capacity() << endl;
////    cout << "After Clear Size : " << v.size() << endl;
////
////    vector<int> a(5,2);
////    cout << "Printing a" << endl;
////    for(int i:a) {
////        cout << i << " ";
////    }
////    cout << endl;
////    vector<int> last(a);
////    cout << "Printing last" << endl;
////    for(int i:a) {
////        cout << i << " ";
////    }
////    cout << endl;
//// --------------------------------------------------------------------------------------------------------------------
//// Deque
////    deque<int> d;
////    d.push_back(10);
////    d.push_front(20);
////    cout << "Front Element: " << d.front() << endl;
////    cout << "Back Element: " << d.back() << endl;
////    cout << "Is Deque Empty: " << d.empty() << endl;
////    cout << "Before Clear Size : " << d.size() << endl;
////    d.erase(d.begin(), d.begin() + 1);
////    cout << "After Clear Size : " << d.size() << endl;
////    d.pop_front();
////    d.pop_back();
////    cout << d.at(0) << endl;
////    for (int i: d) {
////        cout << i << " ";
////    }
////    cout << endl;
//
//// --------------------------------------------------------------------------------------------------------------------
//// List
////    list<int> l;
////    l.push_back(1);
////    l.push_front(2);
////    for(int i:l) {
////        cout << i << " ";
////    }
////    cout << endl;
////    l.erase(l.begin());
////    cout << "After Erase : " << endl;
////    for(int i:l) {
////        cout << i << " ";
////    }
////    cout << endl;
////    cout << "Size of list: " << l.size() << endl;
////    list<int> n(5,100);
////    for(int i:n) {
////        cout << i << " ";
////    }
////    cout << endl;
//
//// --------------------------------------------------------------------------------------------------------------------
////Stack
////    stack<string> s;
////    s.push("Neeraj");
////    s.push("Gupta");
////    cout << "Size: " << s.size() << endl;
////    cout << "Empty or not: " << s.empty() << endl;
////    cout << "Top Element: " << s.top() << endl;
////    s.pop();
////    cout << "Top Element: " << s.top() << endl;
//
////    --------------------------------------------------------------------------------------------------------------------
//// Queue
////    queue<string> q;
////    q.push("Neeraj");
////    q.push("Gupta");
////    cout << "Front Element: " << q.front() << endl;
////    cout << "Size before pop: " << q.size() << endl;
////    q.pop();
////    cout << "Size after pop: " << q.size() << endl;
////    cout << "Front Element: " << q.front() << endl;
//
////    --------------------------------------------------------------------------------------------------------------------
//// Priority Queue
//////  max heap
////    priority_queue<int> maxi;
////
//////    min heap
////    priority_queue<int, vector<int>, greater<int>> mini;
////
////    maxi.push(1);
////    maxi.push(3);
////    maxi.push(2);
////    maxi.push(0);
////    int n = maxi.size();
////    for (int i = 0; i < n; i++) {
////        cout << maxi.top() << " ";
////        maxi.pop();
////    }
////    cout << endl;
////
////    mini.push(1);
////    mini.push(3);
////    mini.push(2);
////    mini.push(0);
////    int m = mini.size();
////    for (int i = 0; i < m; i++) {
////        cout << mini.top() << " ";
////        mini.pop();
////    }
////    cout << endl;
////    cout << "Empty or not: " << mini.empty() << endl;
//
////    --------------------------------------------------------------------------------------------------------------------
//// Set
////    set<int> s;
////    s.insert(5);
////    s.insert(0);
////    s.insert(0);
////    s.insert(0);
////    s.insert(6);
////    s.insert(1);
////    s.insert(1);
////    s.insert(1);
////    for (int i: s) {
////        cout << i << " ";
////    }
////    cout << endl;
////    set<int>::iterator it = s.begin();
////    it++;
////    s.erase(it);
////    for (int i: s) {
////        cout << i << " ";
////    }
////    cout << endl;
////    cout << "is 5 present or not: " << s.count(5) << endl;
////    cout << "is -5 present or not: " << s.count(-5) << endl;
////    set<int>::iterator itr = s.find(5);
////    cout << "Value present at itr: " << *itr << endl;
//
////    --------------------------------------------------------------------------------------------------------------------
//// Map
////    map<int,string> m;
////    m[1] = "Neeraj";
////    m[4] = "Gupta";
////    m[8] = "Doraemon";
////    m.insert({10, "Nobita"});
////    cout << "before erase" << endl;
////    for(auto i:m) {
////        cout << i.first << " : " << i.second << endl;
////    }
////    m.erase(8);
////    cout << "before erase" << endl;
////    for(auto i:m) {
////        cout << i.first << " : " << i.second << endl;
////    }
////    cout << "is 8 present: " << m.count(8) << endl;
////
////    auto it = m.find(10);
////    ------------------------------------------------------------------------------------------------------------------
////  Algorithms
//
//    vector<int> v;
//    v.push_back(1);
//    v.push_back(2);
//    v.push_back(5);
//    v.push_back(7);
//
//    cout << "Finding 5 : " << binary_search(v.begin(), v.end(), 5) << endl;
//    return 0;
//}

//int main() {
////    minimumFromSubArrays();
////    maximumFromSubArrays();
////    findMaximumSumSubArray();
////    sort01();
////    sort012();
////    prefixSumArrayImplementation();
//    int testCases = 0;
//    cin >> testCases;
//    while(testCases--) {
//        int N;
//        cin >> N;
//        int arr[N];
//        for(int i = 0; i < N; i++) {
//            cin >> arr[i];
//        }
//        int numberOfQueries = 0;
//        cin >> numberOfQueries;
//        while(numberOfQueries--) {
//            int L = 0, R = 0;
//            cin >> L;
//            cin >> R;
//            SumOfInfiniteArray(arr, N, L, R);
//        }
//    }
//}

//int main() {
//    StackPractice sp;
//    for (int i = 0; i <= 10; ++i) {
//        sp.push(i*10);
//    }
//    cout << sp.getTop() << endl;
//    sp.print();
//    cout << sp.getTop() << endl;
//    for (int i = 0; i <= 5 ; ++i) {
//        sp.pop();
//    }
//    sp.print();
//    cout << sp.getTop() << endl;
//    cout << sp.getCapacity() << endl;
//}

int main() {
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.print();
    cout << q.dequeue() << endl;
    q.print();
    q.enqueue(30);
    q.enqueue(50);
    q.enqueue(60);
    q.enqueue(70);
    q.enqueue(80);
    q.enqueue(90);
    q.print();
    while (!q.isEmpty()) {
        cout << q.dequeue() << endl;
    }
    cout << "dequeuing: " << q.dequeue() << endl;
    cout << "printing: " << endl;
    q.print();
    cout << "peek:" << q.peek()<< endl;
}