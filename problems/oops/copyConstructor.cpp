#include <cstdio>
#include <iostream>
using namespace std;

class Hero{
    public:
  int health =70;
  char level='A';
/*copy constructor : A copy constructor is a special constructor that creates an object by initializing
 it with an existing object of the same class.
## Example 1: Basic Copy Constructor (Shallow Copy)
This is the most straightforward case. For classes with simple data members 
(like integers, strings, etc.), the copy constructor just copies the value
 of each member from the old object to the new one.*/
 Hero (int health, char level){
    cout<<"Shallow copy Consteructor"<<endl;
    this->health=health;
    this->level=level;

 } 

/*If you don't write a copy constructor for a class like above, the compiler automatically generates
 one for you that does exactly the same thing. This is called a member-wise copy or a shallow copy.
*/
void print( ){
    cout<<"health :"<<this->health<<endl;
    cout<<"level :"<<this->level<<endl;
  }

 //deep copy constructor
 Hero( Hero &obj){
    cout<<"Deep copy Consteructor"<<endl;
    this->health=obj.health;
    this->level=obj.level;
 }
  };
int main(){

Hero obj1(80,'c');
obj1.print();
// copy(Shallow copy) constructor implementation
Hero obj2(obj1);
obj2.print();
// Copy (Deep copy )constructor implementation




}