#include <iostream>
#include <string> 


using namespace std;


class Hero {
public: 
    
    
    string name = "ankit";
    int health = 70;
    char level = 'A';

    // ## Parameterized Constructor ##
    // This constructor creates a new Hero object from individual pieces of data.
    // It is NOT a copy constructor. Its job is to initialize a new object.
    Hero(int health, char level, string name) {
        cout << "Parameterized constructor called." << endl;
        // 'this->' is a pointer to the current object. It's used to
        // distinguish between the member variables and the parameters.
        this->health = health;
        this->level = level;
        this->name = name;
    }

    // ## User-defined Copy Constructor (Shallow Copy) ##
    // This constructor creates a new object by copying an existing object.
    // It is called when you write 'Hero obj2(obj1);'.
   
    // Hero(const Hero& obj) { // It's best practice to take the object by const reference.
    //     cout << "User-defined copy constructor called." << endl;
    //     this->health = obj.health;
    //     this->level = obj.level;
    //     this->name = obj.name;
    // }
    /*
     * If you comment out the copy constructor above, the compiler provides one for you
     * automatically. The default version also performs a shallow copy, just like this one.
     */

    // ## Getter and Setter Methods ##
    // These functions provide controlled access to the private member variables.
    // This concept is known as Encapsulation.

    // Getters: Functions to retrieve the value of a member variable.
    int getHealth() { return this->health; }
    char getLevel() { return this->level; }
    string getName() { return this->name; }

    // Setters: Functions to modify the value of a member variable.
    void setHealth(int health) { this->health = health; }
    void setLevel(char level) { this->level = level; }
    void setName(string name) { this->name = name; }

    // ## Utility Method ##
    // A function to print the current state of the object.
    void print() {
      
        cout << "Name: " << this->name << endl;
        cout << "Health: " << this->health << endl;
        cout << "Level: " << this->level << endl;
    }
};

int main() {
    // ## Object Creation ##
    // Create an instance of the Hero class named 'obj1'.
    // This calls the Parameterized Constructor.
    // The error was here: "ankit" must be in double quotes to be a string literal.
    Hero obj1(80, 'C', "Ankit");
    obj1.print();


   
    // ## Copy Initialization ##
    // Create a new object 'obj2' as a copy of 'obj1'.
    // This is where the Copy Constructor is called.
    Hero obj2(obj1);
    obj2.print();

    Hero obj3(obj1);
    obj3.print();

    obj2=obj3;
    obj2.print();
      


 }  