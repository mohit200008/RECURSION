#include<bits/stdc++.h>
using namespace std;

int expo(int n) {
    if(n==0){
        return 1;
    }

    int chota_answer = expo(n/2);
    if(n%2==1){
        return 2*chota_answer*chota_answer;
    }
    else {
        return chota_answer*chota_answer;
    }
}

int expTwo (int n){
    if(n==0){
        return 1;
    }

    int ans = 2*expTwo(n-1);
    cout<<" for n " <<n<<" answer is "<<ans<<endl;
    return ans;
}

int main () {
    int n;
    cout<<"Enter the value of n :"<<endl;
    cin>>n;

    int res = expo(n);

    cout<<"the required answer is: "<<res<<endl;
}