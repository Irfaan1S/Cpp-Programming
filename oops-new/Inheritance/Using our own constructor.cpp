#include <iostream>
#include <string>
using namespace std;

class Person{
public:
    string name;
    int age;

    //own constructor - not default constructor
    Person(string name,int age){
        this->name = name;
        this->age = age;
    }
    
};
/// Inheritance
class Student : public Person{
    //name,age,rollno
public:
    int rollno;

    //own constructor - not default constructor
    Student(string name, int age, int rollno) : Person(name, age){  //no need to give type as we are calling the constructor - only values pass, like Person(string name,int age)
        this->rollno = rollno;
    }

    void getInfo(){
        cout << "name : "<<name<<endl;
        cout << "age : "<<age<<endl;
        cout << "rollno : "<<rollno<<endl;
    }
};

int main(){

   Student s1("rahul kumar",21,1234);
   
   s1.getInfo();

    return 0;
}
