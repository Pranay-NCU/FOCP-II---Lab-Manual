#include<iostream>
using namespace std;

int main() {
    string pass;
    int u=0,l=0,d=0,s=0,i;

    cin>>pass;

    for(i=0;i<pass.length();i++) {

        if(pass[i]>='A' && pass[i]<='Z')
            u=1;

        else if(pass[i]>='a' && pass[i]<='z')
            l=1;

        else if(pass[i]>='0' && pass[i]<='9')
            d=1;

        else if(pass[i]=='@' || pass[i]=='#' || pass[i]=='$' ||
                pass[i]=='%' || pass[i]=='!' || pass[i]=='&' ||
                pass[i]=='*')
            s=1;
    }

    if(u && l && d && s)
        cout<<"Valid Password";
    else
        cout<<"Invalid Password";

    return 0;
}
