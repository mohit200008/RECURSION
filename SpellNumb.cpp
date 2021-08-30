#include<bits/stdc++.h>
using namespace std;

void spellNumb (int n , string str[]) {

    if(n==0){
        return ;
    }

    spellNumb(n/10,str);
    cout<<str[n%10]<<" ";
}

int main () {
    int n;
    cout<<"Enter the input here: "<<endl;
    cin>>n;
    
    string str[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};

    cout<<"Answer is : ";
    spellNumb(n,str);
    return 0;
}