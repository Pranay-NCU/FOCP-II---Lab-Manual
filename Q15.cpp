#include<iostream>
using namespace std;

int main() {
    int n,i,a,max;

    cin>>n;

    cin>>max;

    for(i=2;i<=n;i++) {
        cin>>a;

        if(a>max)
            max=a;
    }

    cout<<"Largest = "<<max;

    return 0;
}
