#include<bits/stdc++.h>
using namespace std;

int TOH(int n){
    if(n==0) {
        return 0;
    }

    return TOH(n-1) + 1 + TOH(n-1);
}

void PrintSteps (int n , char s, char d, char h) {
    if(n==0){
        return ;
    }

    PrintSteps(n-1,s,h,d);
    cout<<"Moving Disk "<<n<< " from "<<s<<" to " <<d<<endl;
    PrintSteps(n-1,h,d,s);
}

int main() {
    int n;
    cin>>n;

    cout<<TOH(n)<<endl;
    PrintSteps(n,'A','B','C');

    return 0;
}