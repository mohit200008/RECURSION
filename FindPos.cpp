#include<bits/stdc++.h>

using namespace std;

void FindCount(int a[],int n , int x,int i){
    if(i==n){
        return ;
    }

    if(a[i]== x){
        cout<<i<<" ";
    }

    FindCount(a,n,x,i+1);
}

void FindCount2(int a[],int n , int x,int i,int &ans){
    if(i==n){
        return ;
    }

    if(a[i]== x){
        ans++;
    }

    FindCount2(a,n,x,i+1,ans);
}

int main () {
     int ans = 0;
     int a[] = {5, 1, 4, 8, 6, 4, 2};
     FindCount2(a,7,4,0,ans);  
     cout<<ans<<endl;
     return 0;
}