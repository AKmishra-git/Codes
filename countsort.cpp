#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;

void countsort(vector<int> &v){
    int n = v.size();
    int maxi = INT_MIN;
    //finding maximum element

    for(int i=0;i<n;i++) { 
        maxi=max(v[i],maxi);

    }

    //Making count array
    vector<int> count(maxi+1,0);
    for(int i=0;i<=maxi;i++){
        count[v[i]]++;

    }

    //making cumulative count array
    for(int i=1;i<=maxi;i++){
        count[i]+=count[i-1];
    }

    //making a sorted array b
    vector<int> b(n);

    for(int i=n-1;i>=0;i--){
        b[--count[v[i]]] = v[i];
    }

    //copy the elements from b
    for(int i=0;i<n;i++){
        v[i]=b[i];
    }

    

}

int main(){
    int n;
    cout<<"enter the size of array: ";
    cin>>n;

    vector<int> v(n);

    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    countsort(v);



    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }

    return 0;

}


