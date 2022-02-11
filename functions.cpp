#include <iostream> // #include <iostream> is a header file library that lets us work with input and output objects, such as cout.

using namespace std; // using namespace std means that we can use names for objects and variables from the standard library.

// Create a function
void function() {
	cout << "I just got executed!";
}

void myFunction(string fname, int age) {
	cout << fname << " Refsnes. " << age << " years old. \n";
}

void func(string country = "Norway") {
	cout << country << "\n";
}

int add(int x, int y) {
	return x + y;
}

int main() {
	function();
	myFunction("Liam", 3);
	myFunction("Jenny", 14);
	myFunction("Anja", 30);
	func("Sweden");
	func("India");
	func();
	func("USA");
	cout << add(5, 9);
	return 0;
}
