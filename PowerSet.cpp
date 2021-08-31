#include<bits/stdc++.h>
using namespace std;
int totalSubset =0;

void DisplaySubset(vector<int> input, vector<int> output, int index ) {

    if(index>= input.size()){
        for(auto i : output) {
            cout<<i<<" ";   
        } cout<<endl;
        totalSubset++;
        return ;
    }
    
    //nahi liya hai
    DisplaySubset(input,output,index+1);

    // liya hai
    output.push_back(input[index]);
    DisplaySubset(input,output,index+1);

}

int main () {

    cout<<"Enter Size of array: "<<endl;
    int size;
    cin>>size;

    vector<int> arr(size);
    for(int i = 0;i<size;i++) {
        cin>>arr[i];
    }

    DisplaySubset(arr,{},0);
}