#include <iostream>
#include <string>
using namespace std;

//Class
class Teacher{
    //properties of class  //properties are also called attributes 
    string name;
    string dept;
    string subject;
    double salary; //or float salary

    //methods of class
    void changeDept(string newDept){
        dept = newDept; //assign value of newDept to dept
    }
};

int main(){
    
    Teacher obj1;//create object  //or Teacher t1;
    Teacher obj2;
    Teacher obj3;
    Teacher obj4;  
    
    //every individual object created,has name,dept,subject,salary info need to be updated
    obj1.name = "Shradha";
    obj1.subject = "C++";
    obj1.dept = "Computer Science";
    obj1.salary = 25000;

    cout<<obj1.name<< endl;
    return 0;
}
