#include<iostream>
using namespace std;

int main() {
    string s;
    int i,f=0;

    cin>>s;

    for(i=0;i<s.length();i++) {

        if(!((s[i]>='A' && s[i]<='Z') ||
             (s[i]>='a' && s[i]<='z') ||
             (s[i]>='0' && s[i]<='9'))) {

            f=1;
            break;
        }
    }

    if(f==0)
        cout<<"Valid Username";
    else
        cout<<"Invalid Username";

    return 0;
}
