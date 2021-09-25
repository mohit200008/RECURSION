#include<bits/stdc++.h>
using namespace std;

int length(char input[]){
    if(input[0]=='\0'){
        return 0;
    }

    return 1 + length(input+1);
}

int convertStringtoInt(char str[], int n){
    if(n==0){
        return 0;
    }

    int smallAns= convertStringtoInt(str,n-1);
    int lastDigit = str[n-1] - '0';
    int ans = smallAns*10 + lastDigit;
    return ans;

}

int main() {
    char str[] = "134567151";
    int n = length(str);
    
    int a = convertStringtoInt(str,n);
    cout<<a<<endl;
    return 0;
}