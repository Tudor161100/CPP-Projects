#include <bits/stdc++.h>
using namespace std;
int n, a[31], i, j;
int main()
{
    cin >> n;
    for(i = 1 ; i <= n ; i++)
    {
        a[i]=i;
        a[i+n]=i;
    }
    for(i = 1 ; i <= n ; i++)
    {
        for(j = i ; j < n+i ; j++)
        cout << a[j] << " ";
        cout << endl;
    }
    return 0;
}
