#include<bits/stdc++.h>

using namespace std;

int NumberJumps( int n) {
    if(n<0){
        return 0;
    }

    if(n==0){
        return 1;
    }

    return NumberJumps(n-1)+ NumberJumps(n-2) + NumberJumps(n-3);

}

int main () {
    cout<< " Enter the value of n " << endl;

    int n;
    cin>>n;

    cout<< "NUMBER OF JUMPS "<<NumberJumps(n)<<endl;
}