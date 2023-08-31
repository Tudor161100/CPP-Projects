#include <bits/stdc++.h>
using namespace std;
int m , r ,n , a[200][200] , v[40000], i, j;
int main()
{
    cin >> m >> r >> n;
    for(i = 0 ; i < n*n ; i++)
    {
        v[i]=m;
        m+=r;
    }
    for(i = 0 ; i < n ; i++)
    {
        for(j = i ; j < n*n ; j+=n)
        {
            cout << v[j] <<" ";
        }
        cout << endl;
    }

    return 0;
}
