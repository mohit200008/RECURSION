#include<bits/stdc++.h>
using namespace std;

int sumArray(int a[], int n){
    if(n==0){
        return 0;
    }

    return a[0] + sumArray(a+1,n-1);
}

int sumArray2(int a[], int n){
    if(n==0){
        return 0;
    }

    return a[n-1] + sumArray(a,n-1);
}

int sumArray3(int a[], int n, int i){
    if(i==n){
        return 0;
    }

    return a[i] + sumArray3(a,n,i+1);
}

int main () {
    int n;
    cout<<"Enter the size of Array: "<<endl;
    cin>>n;

    int a[n];

    cout<<"Enter the elements of array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    cout<<"Sum of elements is: "<<sumArray3(a,n,0)<<endl;

}