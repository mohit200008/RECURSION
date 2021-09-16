#include<bits/stdc++.h>

using namespace std;

void Replace(char input[]){
    if(input[0]== '\0'){
        return ;
    }

    if(input[0]=='a'){
       input[0] = 'x';
    }

    Replace(input+1);
}

int main() {
    char input[100];
    cin>>input;

    Replace(input);
    cout<<input<<" ";
    return 0;
}