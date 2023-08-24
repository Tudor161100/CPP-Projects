#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, k = 0, i. j, a[100001], b[100001], c[200001];
    cin >> n;
    for(i=1;i<=n;i++)
        cin >> a[i];
    cin >> m;
    for(j=1;j<=n;j++)
        cin >> b[j];

    while(i <= n && j <= m)
        if(a[i] < b[j]){
            c[++k] = a[i];
			i++;
		}
        else
            if(a[i] > b[j])
			{
				c[++k] = b[j];
				j++;
			}
            else
                i++;

    while(i <= n)
	{
		c[++k] = a[i];
		i++;
	}

    while(j <= m)
	{
		c[++k] = b[j];
		j++;
	}

    for(i=1;i<=n;i++){
        cout << c[i] << " ";
        if(i % 10 == 0)
            cout << endl;
    }

    return 0;
}