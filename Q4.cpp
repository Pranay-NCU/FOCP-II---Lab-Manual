#include<iostream>
using namespace std;

int main() {
    int item,qty;
    float price,amt,dis,total;

    cin>>item>>qty>>price;

    amt=qty*price;
    dis=amt*0.20;
    total=amt-dis;

    cout<<"Amount = "<<amt<<endl;
    cout<<"Discount = "<<dis<<endl;
    cout<<"Total = "<<total;

    return 0;
}
