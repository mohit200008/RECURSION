#include<iostream>
#include<c++/stdlib.h>
using namespace std;

void getCounting(int n) {

    if(n<=0){
        return ;
    }
    
    cout<<n<<endl;

    getCounting(n-1);
}

int main () {
    int n;
    cout<<"Enter the number: "<<endl;
    cin>>n;

    cout<<"Counting: "<<endl;
    getCounting(n);
}