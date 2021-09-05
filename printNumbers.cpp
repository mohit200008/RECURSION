#include <bits/stdc++.h>
using namespace std;

void print (int n) {

    if(n==0) {
        return ;
    }

    print(n-1);

    cout<<n<<endl;
    return ;
}

void print2 (int n) {

    if(n==0) {
        return ;
    }
    
    cout<<n<<endl;
    print2(n-1);

    
    return ;
}

int main () {
    int n;
    cout<<"Enter the number: "<<endl;

    cin>>n;

    print2(5);
    return 0;
}