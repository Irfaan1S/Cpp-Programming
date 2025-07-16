#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int sum=0,org_sum=n;

    while(n>0){
        int rem=n%10;
        sum=sum+rem*rem*rem;
        n=n/10;
    }
    if(org_sum==sum){
        cout<<"Armstrong Number\n";
    }
    else{
        cout<<"Not Armstrong Number\n";
    }
    return 0;
}
