#include<iostream>
#include<cmath>

int main() {
    int arr[] = {2,4,6,8,10};
    int maximum = arr[0];
    int n = 6;

    for(int i=1; i<n; i++) {
        maximum = std::max(maximum,arr[i]);
    }
    std::cout<<maximum;

    return 0;
}

