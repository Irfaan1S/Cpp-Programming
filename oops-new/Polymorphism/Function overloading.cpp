#include <iostream>
#include <string>
using namespace std;

class Print{
public:
    void show(int x){
        cout << "int : " <<x <<endl;

    }  
    void show(char ch){
        cout << "char : " << ch <<endl;
        
    }  
};


int main(){

    Print p1;
    p1.show(101);       //automatically it will detect at compile time which fn will get called //since context or usage is int 

    p1.show('&');       //depending on context same things take different forms

    return 0;
}
