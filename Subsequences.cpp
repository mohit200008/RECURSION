#include<bits/stdc++.h>
#include<vector>

using namespace std;

void Print_Subs(string input, string output, vector<string> &v){
    if(input.length() ==0){
        v.push_back(output);
        return ;
    }

    Print_Subs(input.substr(1),output,v);
    Print_Subs(input.substr(1), output+input[0],v);

}

int main () {
    string input;
    cin>>input;


    string output="";
    vector<string> v;
    Print_Subs(input,output,v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}