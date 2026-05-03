#include<iostream>
using namespace std;

int main() {
    int t[30],i,min;

    for(i=0;i<30;i++)
        cin>>t[i];

    min=t[0];

    for(i=1;i<30;i++) {

        if(t[i]<min)
            min=t[i];
    }

    cout<<"Minimum Temperature = "<<min;

    return 0;
}
