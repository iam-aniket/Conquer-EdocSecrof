#include<bits/stdc++.h>
#define tek ios_base::sync_with_stdio(false);cin.tie(0)
#define rep(i,a,n) for(int i = a; i < n; i++)
#define per(i,a) for(int i = a; >= 0; i--)
#define ll long long int
#define pb push_back
#define mp make_pair
#define nl cout<<"\n"
#define ff first
#define ss second
#define vi vector<int>
#define disp(a,n) rep(i,0,n) cout<<a[i]<<" ";nl;
 
using namespace std;
 
int main()
{
	int t;
	ll n;
	cin >> t;
	while(t--)
	{
		cin >> n;
		ll val=8;
		ll sum = 0;
		rep(i,1,n/2+1)
		{
			sum+=i*val;
			val+=8;
		}
		cout << sum << "\n";
	}
	return 0;
}
