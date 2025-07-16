#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

  vector<int>v;
  v.push_back(3);
  v.push_back(1);
  v.push_back(2);

 sort(v.begin(),v.end());
 
 for(auto element:v){
  cout<<element<<endl;
  }

  return 0;
}
