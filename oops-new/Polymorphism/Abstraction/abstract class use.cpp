#include <iostream>
#include <string>
using namespace std;

class Shape{        //abstract class
    virtual void draw() = 0;        //pure virtual fn => the class becomes abstract class automatically
};

class Circle : public Shape{
    public: 
        void draw(){
            cout << "drawing a circle" <<endl;
        }
};

int main(){

   Circle c1;
   c1.draw();

    return 0;
}
