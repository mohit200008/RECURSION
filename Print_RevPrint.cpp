#include<bits/stdc++.h>

using namespace std;

void print(char input[]){
    if(input[0]=='\0'){
        return ;
    }
    cout<<input[0];
    print(input+1);
}
void Revprint(char input[]){
    if(input[0]=='\0'){
        return ;
    }

    Revprint(input+1);
    cout<<input[0];
   
}

int main() {
    char input[] = "abcdef";
    Revprint(input);
    return 0;
}