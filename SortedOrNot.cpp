#include<bits/stdc++.h>
using namespace std;

bool checkSorted(vector<int> arr , int index) {
    if(index>= arr.size()) {
        return true;
    }

    else {
        if(arr[index]< arr[index-1]){
            return false;
        }
        else {
            checkSorted(arr,index+1);
    }
}
}

int main () {
  
    cout<<"Enter the size of array: "<<endl;
    int n;
    cin>>n;

    vector<int> arr(n);
    for(int i = 0;i<n;i++) {
        cin>>arr[i];
    }

    bool answer = checkSorted(arr,1);

    if(answer){
        cout<<"Array is sorted"<<endl;
    }
    else {
        cout<<"Array is not sorted"<<endl;
    }
}
