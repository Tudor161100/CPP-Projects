#include <iostream>

using namespace std;

int n, i, ok, v[1001];

int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>v[i];
    
    ok=1;
    for(i=1;i<n;i++)
    {
        if(v[i]<v[i+1])
        {
            if(v[i+1]<v[i+2])
                ok=0;
        }
        else{
            if(v[i]>v[i+1])
            {
                if(v[i+1]>v[i+2])
                    ok=0;
            }
        }
        if(v[i]==v[i+1])
            ok=0;
    }
    if(ok==0)
        cout<<"NU";
    else
        cout<<"DA";

    return 0;
}
