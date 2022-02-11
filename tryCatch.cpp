#include <iostream> // #include <iostream> is a header file library that lets us work with input and output objects, such as cout.

using namespace std; // using namespace std means that we can use names for objects and variables from the standard library.

int main() {

    try {

        int age;
        cout << "Type your age: ";
        cin >> age;

        if (age >= 18) {
            cout << "Access granted - you are old enough.";
        }
        else {
            throw (age);
        }
    }
    catch (int myNum) {
        cout << "Access denied - You must be at least 18 years old.\n";
        cout << "Age is: " << myNum;
    }

    return 0;
}
