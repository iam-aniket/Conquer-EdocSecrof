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
bool sortbyDesc(int &a,int & b)
{
	return a > b;
}
int gcd(int a, int b) 
{ 
    if (b == 0) 
        return a; 
    return gcd(b, a % b); 
}
int main()
{
	tek;
	int t = 1;
	cin>>t;
	while(t--)
	{
		int n = 1,k = 1;
		cin>>n>>k;
		int a[n+1] = {0},b[n+1] = {0};
		rep(i,0,n)
			cin>>a[i];
		rep(i,0,n)
			cin>>b[i];
		sort(a,a+n);
		sort(b,b+n,sortbyDesc);
		//disp(a,n);
		//disp(b,n);
		int count = 0;
		rep(i,0,n)
		{
			if(count == k)
			break;
 
			if(b[i] > a[i])
			{	count ++;
				a[i] = b[i];
			}
			else
			{
				break;
			}
		}
		int sum = 0;
		rep(i,0,n)
			sum += a[i];
		cout<<sum<<"\n";	
	}
}
