#include<bits/stdc++.h>

using namespace std;

void RemoveConsDup(char input[]) {
   if(input[0]=='\0'){
       return ;
   }

   if(input[0]!=input[1]){
       RemoveConsDup(input+1);
   }
   else {
       for(int i=0;input[i]!='\0';i++){
           input[i]=input[i+1];
       }
       RemoveConsDup(input);
   }
}

int main () {
    char input[100];
    cin>>input;

    cout<<input<<endl;

    RemoveConsDup(input);

    cout<<input<<endl;

    return 0;


}