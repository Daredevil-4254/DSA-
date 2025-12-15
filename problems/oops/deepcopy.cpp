#include <iostream>
#include <string>

class DeepCopyDemo {
public:
    std::string* strPtr; // The pointer to a string

    // 1. Constructor: Allocates memory on the heap
    DeepCopyDemo(const std::string& str) {
        strPtr = new std::string(str); // Allocate new memory
        std::cout << "Constructor: Created '" << *strPtr 
                  << "' at address " << strPtr << "\n";
    }

    // 2. Destructor: Frees the allocated memory
    ~DeepCopyDemo() {
        std::cout << "Destructor: Deleting '" << (strPtr ? *strPtr : "null") 
                  << "' at address " << strPtr << "\n";
        delete strPtr; // Free the memory
        strPtr = nullptr;
    }

    // 3. Copy Constructor (THE DEEP COPY)
    // This is called when a new object is created from an existing one, e.g., DeepCopyDemo objB = objA;
    DeepCopyDemo(const DeepCopyDemo& other) {
        // Allocate NEW memory for the new object
        strPtr = new std::string( *(other.strPtr) );
        
        std::cout << "COPY CONSTRUCTOR: Copied '" << *strPtr 
                  << "' to new address " << strPtr << "\n";
    }

    // 4. Copy Assignment Operator (ALSO DEEP COPY)
    // This is called when an existing object is assigned the value of another, e.g., objC = objA;
    DeepCopyDemo& operator=(const DeepCopyDemo& other) {
        std::cout << "COPY ASSIGNMENT: ";

        // 1. Check for self-assignment (e.g., objA = objA;)
        if (this == &other) {
            std::cout << "Self-assignment skipped.\n";
            return *this;
        }
        
        // 2. Delete the old data in this object
        std::cout << "Deleting old data '" << *strPtr << "'... ";
        delete strPtr;

        // 3. Allocate new memory and copy the new data
        strPtr = new std::string( *(other.strPtr) );
        std::cout << "Copied new data '" << *strPtr << "'.\n";

        // 4. Return this object
        return *this;  
    }
};

int main() {
    std::cout << "--- Creating objA ---\n";
    DeepCopyDemo objA("Hello");

    std::cout << "\n--- Creating objB from objA (triggers Copy Constructor) ---\n";
    DeepCopyDemo objB = objA; // Deep copy!

    std::cout << "\n--- Modifying objA's string ---\n";
    *(objA.strPtr) = "World"; // This will only change objA

    std::cout << "\n--- Final Values ---\n";
    std::cout << "objA: '" << *(objA.strPtr) << "' at address " << objA.strPtr << "\n";
    std::cout << "objB: '" << *(objB.strPtr) << "' at address " << objB.strPtr << "\n";
    
    std::cout << "\n--- Creating objC and using Assignment Operator ---\n";
    DeepCopyDemo objC("Original C");
    objC = objA; // Triggers Copy Assignment Operator

    std::cout << "objC: '" << *(objC.strPtr) << "' at address " << objC.strPtr << "\n";
    
    std::cout << "\n--- Program ending (triggers Destructors) ---\n";
    return 0;
}