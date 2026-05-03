#include<iostream>
using namespace std;

int main() {
    int ch;
    float a,b;

    do {
        cout<<"\n1.Add";
        cout<<"\n2.Subtract";
        cout<<"\n3.Multiply";
        cout<<"\n4.Divide";
        cout<<"\n5.Exit";

        cin>>ch;

        if(ch>=1 && ch<=4) {
            cin>>a>>b;
        }

        switch(ch) {
            case 1: cout<<"Result = "<<a+b; break;
            case 2: cout<<"Result = "<<a-b; break;
            case 3: cout<<"Result = "<<a*b; break;
            case 4: cout<<"Result = "<<a/b; break;
            case 5: break;
            default: cout<<"Invalid";
        }

    } while(ch!=5);

    return 0;
}
