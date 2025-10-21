#include<iostream>
using namespace std;
class Hero{
    private:
    int health=70;
    char level='A';

    public:
    int gethealth(){
        
        return health;
    }

    int sethealth(int health){
        this->health=health;
        return health;
    }

};
int main(){
    //static allocation
    Hero object;

    int health=object.gethealth();
    cout<<"Old health: "<<health<<endl;


    int newhealth=object.sethealth(99);
    cout<<"New health: "<<newhealth<<endl;

    // dynnamic allocation
    Hero *object2=new Hero;


    int health1=(*object2).gethealth();
    cout<<"Old health: "<<health<<endl;


    int newhealth1=object2->sethealth(99);
    cout<<"New health: "<<newhealth<<endl;
}

