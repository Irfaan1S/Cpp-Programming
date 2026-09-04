#include <iostream>
#include <string>
using namespace std;

class Teacher{

private:
        double salary; 
public:
    string name;
    string dept;
    string subject;

    Teacher(string name,string dept,string subject,double salary){ 
        this->name = name;         
        this->dept = dept;
        this->subject = subject;
        this->salary = salary;
    }
    
    //copy constructor 
    Teacher(Teacher &orgobj) {     //pass Teacher class type obj by reference (&)  - pass by reference //original object
        cout << "I am custom copy constructor...\n";
        this->name = orgobj.name;
        this->dept = orgobj.dept;
        this->subject = orgobj.subject;
        this->salary = orgobj.salary;
    }
   
    void getInfo(){
        cout<<"name : "<< name <<endl;
        cout<<"subject : "<< subject <<endl;
    }
};

int main(){
    
    Teacher obj1("Shradha","ComputerScience","C++",25000); 
    obj1.getInfo();

    Teacher obj2(obj1);  //custom copy constructor invoked or called //our own copy constructor
    obj2.getInfo();

    return 0;
}
