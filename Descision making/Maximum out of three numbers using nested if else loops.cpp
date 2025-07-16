#include<iostream>
using namespace std;

int main(){

  int a,b,c;
  cin>>a>>b>>c;

  if(a>b){           //a>b
    if(a>c){         //a>b and a>c 
       cout<<a<<endl;
    }
    else{
      cout<<c<<endl;  //a>b but a<c
    }
  }
  else{               // b>a
     if(b>c){
      cout<<b<<endl;  //b>a and b>c
     }
     else{
      cout<<c<<endl;  //b>a but b<c i.e.,c>b>a
     }
  }
   return 0;
} 
