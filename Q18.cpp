#include<iostream>
using namespace std;

int main() {
    int n,t,r,rev=0;

    cin>>n;

    t=n;

    while(n>0) {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }

    if(rev==t)
        cout<<"Palindrome";
    else
        cout<<"Not Palindrome";

    return 0;
}
