#include <iostream>

using namespace std;

int n, m, k=0, a[100001], b[100001], c[100001], i, j;

int main()
{
    cin>>n;
    for(i=1;i<=n;i++) cin>>a[i];
    cin>>m;
    for(j=1;j<=m;j++) cin>>b[j];

    while(i<=n && j<=m){
        if(a[i]<b[j])
            {
                c[++k]=a[i];
                i++;
            }
        else 
        {
            if(a[i]>b[j])
            {
                c[++k]=b[j];
                j++;
            }
            else i++;
        }
    }

    while(i<=n){
        c[++k]=a[i];
        i++;
    }

    while(j<=m){
        c[++k]=b[j];
        j++;
    }

    for(i=1;i<=k;i++)
    {
        cout<<c[i]<<' ';
        if(i%10==0)
            cout<<endl;
    }

    return 0;
}
