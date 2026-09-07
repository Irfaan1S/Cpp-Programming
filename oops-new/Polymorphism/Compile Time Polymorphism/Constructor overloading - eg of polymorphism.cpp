#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    
    Student(){  //non- parameterized constructor
        cout << "non-parameterized constructor" <<endl;
    };

    Student(string name){
        this->name = name;
        cout << "parameterized constructor" <<endl;
    }
};

int main(){

   Student s1;      //if no parameters given then, non-parameterized constructor gets called

   //Student s1("Tony Stark");  //if parameters given,then parameterized constructor gets called
   
   //depending on the context => how is it used on that basis our object changes its form and decide what constructor gets called 

    return 0;
}
