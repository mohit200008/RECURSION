#include <bits/stdc++.h>
using namespace std;

bool checkPal(int a[], int s, int e)
{
    if (s > e)
    {
        return true;
    }

    if (a[s] == a[e])
    {
        return checkPal(a, s + 1, e - 1);
    }
    else
    {
        return false;
    }
}

int main()
{
    int a[] = {1, 2, 3, 4, 3, 5, 1};
    int ans = checkPal(a, 0, 6);
    if (ans)
    {
        cout << "is Palindrome" << endl;
    }
    else
    {
        cout << "Not a Palindrome" << endl;
    }
    return 0;
}