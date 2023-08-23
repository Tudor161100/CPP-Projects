#include <iostream>

using namespace std;

int a[101][101], n, m, cnt=0, x, i, j;
bool ok;

int main()
{
    cin>>n>>m;
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
            cin>>a[i][j];

    for(i=1;i<n;i++)
        for(x=i+1;x<=n;x++)
        {
            ok=0;
            for(j=1;j<=m;j++)
                if(a[i][j]!=a[x][j])
                    ok=1;
                if(ok==0) cnt++;
        }

    cout<<cnt;

    return 0;
}
