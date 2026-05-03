#include<iostream>
using namespace std;

int main() {
    int a[3][5],i,j;

    for(i=0;i<3;i++) {
        for(j=0;j<5;j++) {
            cin>>a[i][j];
        }
    }

    cout<<"2nd subject of 1st student = "<<a[0][1]<<endl;
    cout<<"5th subject of 3rd student = "<<a[2][4];

    return 0;
}
