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

    string name;
    string dept;
    string subject;
};

int main(){
    
    Teacher obj1;
    Teacher obj2;
    Teacher obj3;
    Teacher obj4;  
    
    obj1.name = "Shradha";
    obj1.subject = "C++";
   // obj1.dept = "Computer Science";

    cout<<obj1.name<< endl;
    cout << obj1.dept <<endl;
    return 0;
}
