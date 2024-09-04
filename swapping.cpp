#include<iostream>
using namespace std;

int main() {
    int a;
    cout<<"enter 1st number: ";
    cin>>a;

    int b;
    cout<<"enter 2nd number: ";
    cin>>b;

    int temp;

    std::cout<<"Before swapping: "<<a<<" "<<b<<'\n';

    temp = a;
    a=b;
    b=temp;
    std::cout<<"after swapping :"<<a<<" "<<b;

    return 0;
}
    
