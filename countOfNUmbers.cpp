#include<bits/stdc++.h>

using namespace std;

int count(int n) {

    if(n==0){
        return 0;
    }

    int smallAns = count(n/10);
    return smallAns+1;
}

int main () {
    int n ;
    cout<<"Please enter the number : "<<endl;
    cin>>n;

    cout<<"Nummber of digits are : "<<" "<<count(n)<<endl;;

    return 0;
}