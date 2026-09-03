#include <iostream>
#include <string>
using namespace std;

//Class
class Teacher{

private:
        double salary; 
public:

    //non-parameterized constructor since,there are no parameters inside parenthesis
    Teacher(){          //constructor
        dept = "Computer Science";
    }

    //parameterized constructor since,there are parameters inside parenthesis
    Teacher(string n,string d,string s,double sal){          //n - name, d - dept, s - subject,sal -salary //constructor with 4 parameters
        name = n;           
        dept = d;
        subject = s;
        salary = sal;
    }

    string name;
    string dept;
    string subject;

    void getInfo(){
        cout<<"name : "<< name <<endl;
        cout<<"subject : "<< subject <<endl;
    }
};

int main(){
    
    Teacher obj1("Shradha","ComputerScience","C++",25000); //pass values in parenthesis (in single line, all values passed in constructor)
    obj1.getInfo();

    return 0;
}
