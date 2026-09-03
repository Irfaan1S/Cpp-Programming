#include <iostream>
#include <string>
using namespace std;

//Class
class Teacher{
private:
        double salary; 
public:
    string name;
    string dept;
    string subject;


    void changeDept(string newDept){
        dept = newDept; 
    }

    //setter 
    void setSalary(double s){
            salary = s;
    }

    //getter 
    double getSalary(){
        return salary;
    }
};


int main(){
    
    Teacher obj1;
    Teacher obj2;
    Teacher obj3;
    Teacher obj4;  
    
    obj1.name = "Shradha";
    obj1.subject = "C++";
    obj1.dept = "Computer Science";

    obj1.setSalary(25000);

    //obj1.salary = 25000;

    cout<<obj1.name<< endl;
    cout <<obj1.getSalary() <<endl;
    return 0;
}
