#include <bits/stdc++.h>
using namespace std;
int n , m , a[103][103] , cnt = 0, i, j;
int main()
{
    cin >> n >> m;
    for(i = 0 ; i <= n+1 ; i++)
        for(j = 0 ; j <= m+1 ; j++)
        {
            if(i==0 || j==0 || i==n+1 || j == m+1)
            a[i][j]=2;
            else cin >> a[i][j];
        }
    for(i = 1 ; i <= n ; i++)
        for(j = 1 ; j <= m ; j++)
        {
            int  ok = 1;
            if(a[i+1][j] % 2 != 0 || a[i][j+1] % 2 != 0 || a[i][j-1] % 2 != 0 || a[i-1][j] % 2 != 0) ok = 0;
            if(ok) cnt++;
        }
    cout << cnt;
    return 0;
}
