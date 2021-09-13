#include <bits/stdc++.h>

using namespace std;

int FirstIndex(int a[], int n, int x, int i)
{
    if (i == n)
    {
        return -1;
    }

    if (a[i] == x)
    {
        return i;
    }

    return FirstIndex(a, n, x, i + 1);
}

int LastIndex(int a[], int n, int x, int i)
{
    if (i < 0)
    {
        return -1;
    }

    if (a[i] == x)
    {
        return i;
    }

    return LastIndex(a, n, x, i - 1);
}
int LastIndex2(int a[], int n, int x)
{
    if (n == -1)
    {
        return -2;
    }

    if (a[n - 1] == x)
    {
        return n - 1;
    }

    LastIndex2(a, n - 1, x);
}
int LastIndex3(int a[], int n, int x, int i)
{
    if (i==n)
    {
        return -1;
    }

    int IndexRam = LastIndex3(a, n, x, i + 1);
    if (IndexRam == -1)
    {
        if (a[i] == x)
        {
            return i;
        }
        else
        {
            return -1;
        }
    }
}

int main()
{
    int a[] = {5, 1, 4, 8, 6, 4, 2};

    cout << "First time appearing at: " << FirstIndex(a, 7, 4, 0) << endl;
    cout << "Last time appearing at: " << LastIndex(a, 7, 4, 6) << endl;
    cout << "Last time appearing at: " << LastIndex2(a, 7, 4)<<endl;
    cout << "Last time appearing at: " << LastIndex3(a, 7, 4, 0)<<endl;


    return 0;
}