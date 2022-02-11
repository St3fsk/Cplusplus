#include <iostream> // #include <iostream> is a header file library that lets us work with input and output objects, such as cout.

using namespace std; // using namespace std means that we can use names for objects and variables from the standard library.

// Create a Car class with some attributes
//class Car {
//public: // Access specifier
    //string brand;
    //string model;
    //int year;

    //void myMethod() { // Method/function defined inside the class
        //cout << "Hello World!" << endl;
    //}
//};

// Method/function definition outside the class
//void Car::myMethod() {
    //cout << "Hello World!";
//}

// public    - members are accessible from outside the class.
// private   - members cannot be accessed from outside the class.
// protected - members cannot be accessed from outside the class, however, they can be accessed in inherited classes.

class Car {        // The class
public:            // Access specifier: public, private and protected
    string brand;  // Attribute
    string model;  // Attribute
    int year;      // Attribute
    Car(string x, string y, int z) { // Constructor with parameters
        brand = x;
        model = y;
        year = z;
    }
};

int main() {
    // Create an object of Car
    //Car carObj1;
    //carObj1.brand = "BMW";
    //carObj1.model = "X5";
    //carObj1.year = 1999;

    // Create another object of Car
    //Car carObj2;
    //carObj2.brand = "Ford";
    //carObj2.model = "Mustang";
    //carObj2.year = 1969;

    Car carObj1("BMW", "X5", 1999);
    Car carObj2("Ford", "Mustang", 1969);

    // Print attribute values
    cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
    cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";

    //Car myObj;     // Create an object of MyClass
    //myObj.myMethod();  // Call the method

    return 0;
}
