#include<bits/stdc++.h>

using namespace std;

void Remove(char input[]) {
    if(input[0]== '\0'){
        return ;
    }

    if(input[0]!='a'){
        Remove(input+1);
    }
    else {
        for(int i=0;input[i]!='\0';i++){
            input[i]=input[i+1];
        }
        Remove(input);
    }
}

int main () {
     char input[100];
    cin>>input;

    Remove(input);
    cout<<input<<" ";
    return 0;
}