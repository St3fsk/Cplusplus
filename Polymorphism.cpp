#include <iostream>
#include <string>
using namespace std;

// Base class
class Animal {
  public:
    void animalSound() {
      cout << "The animal makes a sound \n" ;
    }
    
    void anotherSound() {
      cout << "Oof \n" ;	
    }
};

// Derived class
class Pig : public Animal {
  public:
    void animalSound() {
      cout << "The pig says: wee wee \n" ;
    }
};

// Derived class
class Dog : public Animal {
  public:
    void animalSound() {
      cout << "The dog says: bow wow \n" ;
    }
};

int main() {
  Animal myAnimal;
  Pig myPig;
  Dog myDog;
  
  // For example, think of a base class called Animal that has a method called animalSound(). 
  // Derived classes of Animals could be pig, cat, dog or a bird.
  // And they also have their own implementation of an animal sound.
  
  myAnimal.animalSound();
  myPig.animalSound();
  myDog.animalSound();
  myDog.anotherSound();
  return 0;
}
