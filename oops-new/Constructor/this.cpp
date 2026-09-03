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
    Teacher(){          
        dept = "Computer Science";
    }

    Teacher(string name,string dept,string subject,double salary){ 
        this->name = name;           //we need, name = name ,i.e; object name = parameter name  //to show object's property use this pointer
        this->dept = dept;
        this->subject = subject;
        this->salary = salary;
    }

    void getInfo(){
        cout<<"name : "<< name <<endl;
        cout<<"subject : "<< subject <<endl;
    }
};

int main(){
    
    Teacher obj1("Shradha","ComputerScience","C++",25000); 
    obj1.getInfo();

    return 0;
}
