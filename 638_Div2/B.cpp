//UPSOLVED - CF638B
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
		int n = 1,k = 1;
		cin>>n>>k;
		
		int a[n + 1] = {0};
		rep(i,0,n)	cin>>a[i];
		
		set<int> s1;
		
		s1.insert(a,a+n);
		
		if(s1.size() > k)
			cout<<"-1"<<"\n";
		else
		{
			cout<<n*k<<"\n";
			rep(i,0,n)
			{
				for(int x : s1)
				cout<<x<<" ";
				rep(j,0,k - s1.size())
					cout<<"1 ";
			}
			nl;
		}
	}
}
