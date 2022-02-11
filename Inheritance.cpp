#include <iostream> // #include <iostream> is a header file library that lets us work with input and output objects, such as cout.

using namespace std; // using namespace std means that we can use names for objects and variables from the standard library.

// Base class
class MyClass {
public:
    void myFunction() {
        cout << "Some content in parent class." << endl;
    }
};

// Another base class
class MyOtherClass {
public:
    void myOtherFunction() {
        cout << "Some content in another class." << endl;
    }
};

// Derived class
class MyChildClass : public MyClass, public MyOtherClass {
};

int main() {
    MyChildClass myObj;
    myObj.myFunction();
    myObj.myOtherFunction();
    return 0;
}
