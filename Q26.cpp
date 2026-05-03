#include<iostream>
using namespace std;

int main() {
    int m[5],i,total=0;
    float per;

    for(i=0;i<5;i++) {
        cin>>m[i];
        total=total+m[i];
    }

    per=total/5.0;

    cout<<"Total = "<<total<<endl;
    cout<<"Percentage = "<<per;

    return 0;
}
