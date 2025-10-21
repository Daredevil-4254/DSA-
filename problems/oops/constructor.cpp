#include <iostream>
using namespace std;

class Hero{
    public:
    // simple constructor
    Hero(){
        cout<<"Constructor being called"<<'\n';

    }
/*Note: there is an in-built constructor 
which is called when no any constructor is 
defined within the class and is called default constructor*/ 

int health=70;

//parameterised constructor
Hero(int health){
    this->health=health;
    cout<<"Address of this ->"<<this<<endl;

}
/*"this" is a pointer to the current object used for situations like above*/
   

};
int main(){
    //static object creation
    cout<<"hi"<<endl;
    Hero o1;
   cout<<"hello"<<endl;
    //Dynamicially object created
    Hero *o2=new Hero();


Hero o3(99);
cout<<"New Health :"<<o3.health<<endl;
cout<<"Address of o2 ->"<<&o2<<endl;

//address of 'this' and o2 are same



}