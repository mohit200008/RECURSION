#include<bits/stdc++.h>
using namespace std;

int Fibonacci(int n) {

    if(n==0 || n==1) {
        return n;
    }

    return Fibonacci(n-1) + Fibonacci(n-2);
}

int main () {
    int n;
    cout<<"Enter the input: "<<endl;

    cin>>n;

    cout<< "Value of " << n << "th Fibonaaci is: " << Fibonacci(n);
}