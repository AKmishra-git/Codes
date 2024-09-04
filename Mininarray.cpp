#include<iostream>
#include<limits.h>
using namespace std;

int main() {
    int n;
    cout<<"enter the size: ";
    cin>>n;

    int arr[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<endl;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int min_ele = INT_MAX;

    for(int i=0;i<n;i++){
        min_ele = min(min_ele,arr[i]);
    }

    cout<<"Minimum element is: "<<min_ele;


}




    


