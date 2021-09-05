#include<bits/stdc++.h>
using namespace std;

bool isPresent(int a[],int n , int x){
    if(n==0){
        return false;
    }

    if(a[0]==x){
        return true;
    }

    return isPresent(a+1,n-1,x);
}

int main() {
    int n,x;
    cout<<"Enter the size of Array: "<<endl;
    cin>>n;

    int a[n];

    cout<<"Enter the elements of array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    cout<<"Enter element to be found: "<<endl;
    cin>>x;

    if(isPresent(a,n,x)){
        cout<<"Element is present in the array: "<<endl;
    }
    else {
        cout<<"Element is not present in the array: "<<endl;
    }
}