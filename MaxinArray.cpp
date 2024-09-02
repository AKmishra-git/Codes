#include<iostream>
#include<limits.h>
using namespace std;

int main() {

    int n;
    cout<<"Enter size: ";
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){ // taking an array as an input
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){ //Printing an array
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    int maxi = INT_MIN;

    for(int i=0;i<n;i++){
        maxi = max(maxi,arr[i]);
    }

    cout<<"Maximum element in array is: "<<maxi;

}





