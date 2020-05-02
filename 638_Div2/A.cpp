#include<bits/stdc++.h>
#define tek ios_base::sync_with_stdio(false);cin.tie(0)
#define rep(i,a,n) for(int i = a; i < n; i++)
#define per(i,a) for(int i = a; >= 0; i--)
#define lli long long int
#define pb push_back
#define mp make_pair
#define nl cout<<"\n"
#define ff first
#define ss second
#define vi vector<int>
//	1073741824
bool sortBySec(int a,int b)
{
	return a > b;
}
using namespace std;
 
int main()
{
	tek;
	int t = 1;
	cin>>t;
	while(t--)
	{
		int n = 1;
		cin>>n;
		
		lli a[n+1] = {0};
		rep(i,0,n)
		{
			a[i] = pow(2,i+1);
		}
		//rep(i,0,n)
		//	cout<<a[i]<<"\n";
		
		lli x = 0,y = 0;
		rep(i,0,n/2 - 1)
			x += a[i];
		rep(j,n/2 - 1,n-1)
			y += a[j];
		x += a[n-1];
		//cout<<x<<" "<<y<<"\n";
		cout<<abs(x-y);
		nl;
		
	}
}
