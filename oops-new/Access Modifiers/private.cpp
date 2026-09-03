#include <iostream>
#include <string>
using namespace std;

//Class
class Teacher{//by default,the access modifier is private
    private:
    string name;
    string dept;
    string subject;
    double salary; 

    //methods of class
    void changeDept(string newDept){
        dept = newDept; 
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
    obj1.salary = 25000;

    cout<<obj1.name<< endl;
    return 0;
}
