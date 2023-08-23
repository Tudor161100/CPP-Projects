#include <iostream>

using namespace std;

int a[26][26], i, j, n, m, lmax=0, lmin=0, mini=10001, maxi=-1;

int main()
{
    cin>>n>>m;
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
            {
                cin>>a[i][j];

                if(a[i][j]>maxi)
                {
                    maxi=a[i][j];
                    lmax=i;
                }

                if(a[i][j]<mini)
                {
                    mini=a[i][j];
                    lmin=i;
                }
            }
    
    for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
            {
                if(i==lmax) cout<<a[lmin][j]<<" ";
                if(i==lmin) cout<<a[lmax][j]<<" ";
                if(i!=lmax && i!=lmin) cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }

    return 0;
}
