#include<bits/stdc++.h>
using namespace std;

void getSequence(string str, int Index, string output) {

    if(Index == str.length()){
        cout<<output<<endl;
        return ;
    }

    getSequence(str,Index+1,output);

    output.push_back(str[Index]);
    getSequence(str,Index+1,output);
}

int main() {
    cout<<"Enter the String"<<endl;
    string str;
    cin>>str;

    cout<<"Printing all the sequences: "<<endl;
    string output="";
    getSequence(str,0,output);
}