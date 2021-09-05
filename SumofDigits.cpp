#include<bits/stdc++.h>

using namespace std;

int Sum(int n) {

    if(n==0){
        return 0;
    }

    int smallAns = Sum(n/10);
    
    int last_digit = n%10;

    int ans = smallAns + last_digit;
}

int main () {
    int n ;
    cout<<"Please enter the number : "<<endl;
    cin>>n;

    cout<<"Sum of digits are : "<<" "<<Sum(n)<<endl;;

    return 0;
}