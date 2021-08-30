#include<bits/stdc++.h>
using namespace std;

int getFactorial (int n ) {
    if (n<=1){
        return 1;
    }

    int aage_ka_factorial = getFactorial(n-1);

    int res = n* aage_ka_factorial;

    return res;
}

int main() {

    int n;
    cout<<"Please enter the Input: "<<endl;
    cin>>n;

    cout<<"value of "<<n<< " is" << " " << getFactorial(n);
}