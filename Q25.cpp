#include<iostream>
using namespace std;

int main() {
    int a,b,i,j,f;

    cin>>a>>b;

    for(i=a;i<=b;i++) {

        f=0;

        for(j=2;j<i;j++) {

            if(i%j==0) {
                f=1;
                break;
            }
        }

        if(f==0 && i!=1)
            cout<<i<<" ";
    }

    return 0;
}
