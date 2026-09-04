#include <iostream>
#include <string>
using namespace std;

class Student{
public:
    string name;
    double *cgpaPtr;    //pointer


    Student(string name, double cgpa){   //student constructor
            this->name = name;
            cgpaPtr = new double;
            *cgpaPtr = cgpa;  //deference and store cgpa at that location
    }

    //destructor
    ~Student(){
        cout << "Hi, I delete everything\n";
        delete cgpaPtr;         //if not done,then memory leak for dynamically allocated memory so we need to deallocate them 
    }

    void getInfo(){
        cout << "name : " <<name << endl;
        cout << "cgpa : " <<*cgpaPtr << endl;
    }
};

int main(){
 
    Student s1("rahul kumar",8.9);
    s1.getInfo();
   
    return 0;
}
