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
	tek;
	int t = 1;
	cin>>t;
	while(t--)
	{
		int n = 1,m = 1;
		cin>>n>>m;
		if(n == 1)  cout<<"0\n";
		else if(n == 2) cout<<m<<"\n";
		else
		    cout<<2*m<<"\n";
	}
}
