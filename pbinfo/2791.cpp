#include <bits/stdc++.h>
using namespace std;
int n , v[1001], i, j;
int main()
{
    cin >> n;
    for(i = 1 ; i <= n ; i++) cin >> v[i];
    for(i = 1 ; i <= n ; i++)
    {
        for(int j = 1 ; j <= n ; j++)
            if(j % 2 == 0) cout << v[i] << ' ';
            else cout << v[n - i + 1] << ' ';
        cout << endl;
    }
    return 0;
}
