#include<stdio.h>
using namespace std;

int main(){
 
  int a=1,b=3,c;
  
  c=b<<a;
  b=c*(b*(++a)--);
  a=a>>b;
  
  printf("%d",b);
  
  return 0;
}
