#include<bits/stdc++.h>

using namespace std;

int multiply(int m , int n ) {
    if(n==0){
        return 0;
    }

    int smallAns = multiply(m,n-1);

    return smallAns + m;
}

int main() {
    int m,n;
    cout<<"Enter the first number: "<<endl;
    cin>>m;
    cout<<"Enter the second number: "<<endl;
    cin>>n;

    cout<<multiply(m,n)<<endl;;

    return 0;


}