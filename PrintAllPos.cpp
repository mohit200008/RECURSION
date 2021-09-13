#include<bits/stdc++.h>

using namespace std;

void printAllPos(int a[],int n,int x,int i) {
    if(i==n){
        return ;
    }

    if(a[i]==x){
        cout<<i<<" ";
    }

    printAllPos(a,n,x,i+1);
}
int count(int a[],int n,int x, int i , int &ans){
     if(i==n){
        return 0;
    }

    if(a[i]==x){
        ans++;
    }

    count(a,n,x,i+1,ans);
}

int countSecond(int a[],int n, int x ,int i){
    if(i==n){
        return 0;
    }
    if(a[i]==x){
       return 1+ countSecond(a,n,x,i+1);
    }

    return countSecond(a,n,x,i+1);
}

int main () {
    int a[] = {5,4,6,2,6,4,5,5};
    int ans=0;
    // printAllPos(a,8,5,0);
    // count(a,8,5,0,ans);
    // cout<<ans<<endl;
    cout<<countSecond(a,8,6,0)<<endl;
    
    return 0;
}

