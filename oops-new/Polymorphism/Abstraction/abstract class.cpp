#include <iostream>
#include <string>
using namespace std;

class Shape{        //abstract class
    virtual void draw() = 0;        //pure virtual fn => the class becomes abstract class automatically
};



int main(){

   Shape s1;
   

    return 0;
}
