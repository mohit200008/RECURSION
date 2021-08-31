#include <bits/stdc++.h>
using namespace std;

void Perm(string str, int Index)
{

    if (Index >= str.length())
    {
        cout << str << endl;
        return;
    }

    for(int i=Index;i<str.length();i++){
        swap(str[Index],str[i]);
        Perm(str,Index+1);

        swap(str[Index],str[i]);
    }
}

int main () {
    cout<<"Enter the String: "<<endl;
    string str;
    cin>>str;

    cout<<"Printing all the Permutations: "<<endl;
    Perm(str,0);
}