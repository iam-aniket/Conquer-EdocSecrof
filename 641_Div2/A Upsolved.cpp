#include<bits/stdc++.h>
#define tek ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
int main()
{
    tek;
    int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin >> n >> k;
		if(n%2==0)
		{
			cout << n+2*k << endl;
			continue;
		}
		int div = 0;
		for(int i = 2; i<=n; i++)
			if(n%i==0)
		    {
		        div = i;
		        break;
		    }
		cout << n+div+2*(k-1) << endl;
	}
	return 0;
}
