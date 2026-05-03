#include<iostream>
using namespace std;

int main() {
    int s[10],i,total=0;
    float avg;

    for(i=0;i<10;i++) {
        cin>>s[i];
        total=total+s[i];
    }

    avg=total/10.0;

    cout<<"Total Salary = "<<total<<endl;
    cout<<"Average Salary = "<<avg;

    return 0;
}
