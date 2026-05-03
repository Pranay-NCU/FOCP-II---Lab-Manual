#include<iostream>
using namespace std;

int main() {
    int n,t,r,sum=0;

    cin>>n;

    t=n;

    while(n>0) {
        r=n%10;
        sum=sum+(r*r*r);
        n=n/10;
    }

    if(sum==t)
        cout<<"Armstrong Number";
    else
        cout<<"Not Armstrong";

    return 0;
}
