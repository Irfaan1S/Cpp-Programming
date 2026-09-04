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
    //our own constructor
    Student(Student &obj){
        this->name = obj.name;
        this->cgpaPtr = obj.cgpaPtr;
    }
    void getInfo(){
        cout << "name : " <<name << endl;
        cout << "cgpa : " <<*cgpaPtr << endl;
    }
};

int main(){
 
    Student s1("rahul kumar",8.9);
    s1.getInfo();

    Student s2(s1);
    *(s2.cgpaPtr) = 9.2;  // dereferenc and change to 9.2  
    s1.getInfo();
    
    return 0;
}
