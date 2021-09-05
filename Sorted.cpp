#include<bits/stdc++.h>
using namespace std;

bool isSorted(int a[],int n) {
    if(n==0 || n==1) {
        return true;
    }

    if(a[0]>a[1]){
        return false;
    } else { 
        bool smallAns = isSorted(a+1,n-1);
        return smallAns;
    }

}
bool isSorted2(int a[],int n) {
    if(n==0 || n==1) {
        return true;
    }

    if(a[n-2]>a[n-1]){
        return false;
    } else { 
        bool smallAns = isSorted(a,n-1);
        return smallAns;
    }

}
int main () {
    int i;
    int n;
    cout<<"Enter the size of array: "<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the elements of the array: "<<endl;

    for(i=0;i<n;i++){
        cin>>a[i];
    }

    if(isSorted2(a,n)){
        cout<<"Array is sorted: "<<endl;
    }
    else {
        cout<<"Array is not sorted: "<<endl;
    }
}