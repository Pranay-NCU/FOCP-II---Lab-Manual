#include<iostream>
using namespace std;

int main() {
    int n,i,sum=0;

    cin>>n;

    for(i=1;i<n;i++) {
        if(n%i==0)
            sum=sum+i;
    }

    if(sum==n)
        cout<<"Perfect Number";
    else
        cout<<"Not Perfect";

    return 0;
}
