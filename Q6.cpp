#include<iostream>
using namespace std;

int main() {
    int n,i;
    float sal,bonus,net;

    cin>>n;

    for(i=1;i<=n;i++) {
        cin>>sal;

        bonus=sal*0.12;
        net=sal+bonus;

        cout<<"Bonus = "<<bonus<<endl;
        cout<<"Net Salary = "<<net<<endl;
    }

    return 0;
}
