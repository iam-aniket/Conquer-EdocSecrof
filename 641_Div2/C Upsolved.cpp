/* Look for:
* the exact constraints (multiple sets are too slow for n=10^6 :( )
* special cases (n=1?)
* 1LL<<i and not 1<<i
* overflow (ll vs ll?)
* array bounds
* if you have no idea just guess the appropriate well-known algo instead of doing nothing :/
*/

// Author:: Subash Singha Roy
// Institution:: Jalpaiguri Government Engineering College

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define dd double
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define mod (ll)(998244353)
#define sz(a) (ll)a.size()
#define all(a) a.begin(),a.end()
#define fr(i,a,b) for(ll i=a;i<b;i++)
#define frr(i,a,b) for(ll i=a-1;i>=b;i--)
#define tc(t) ll t;cin >>t;while(t--)
#define pb emplace_back
#define ee emplace
#define rr return 0
#define mp make_pair
#define pr  pair <ll,ll>
#define ff first
#define ss second
#define pie 3.1415926535
#define inf LLONG_MAX
ll mult(ll a,ll b, ll p=mod){return ((a%p)*(b%p))%p;}
ll add(ll a, ll b, ll p=mod){return (a%p + b%p)%p;}
ll fpow(ll x, ll y)  
{  
    ll res = 1;     
    x = x % mod; 
    if (x == 0) return 0; 
    while (y > 0)  
    {  
        if (y & 1LL)  
            res = (res*x) % mod;  
        y = y>>1LL;
        x = (x*x) % mod;  
    }  
    return res;  
}  
ll inv(ll a, ll p = mod) {return fpow(a, p - 2);}
bool sa(const pair<ll,ll> &a,const pair<ll,ll> &b){return (a.second<b.second);}
bool fd(const pair<ll,ll> &a,const pair<ll,ll> &b){return (a.first>b.first);}
bool sd(const pair<ll,ll> &a,const pair<ll,ll> &b){return (a.second>b.second);}
ll dx[4]={0,0,1,-1};
ll dy[4]={1,-1,0,0};
bool valid(ll x,ll y,ll n,ll m){
    if(x<0 || y<0){
       return false;
   }
   else if(x>=n || y>=m){
       return false;
   }
   else
   return true;
}
#define MAXN 1000001
ll spf[MAXN];
void sieve() 
{ 
    spf[1] = 1; 
    for (ll i=2; i<MAXN; i++) 
  
        // marking smallest prime factor for every 
        // number to be itself. 
        spf[i] = i; 
  
    // separately marking spf for every even 
    // number as 2 
    for (ll i=4; i<MAXN; i+=2) 
        spf[i] = 2; 
  
    for (ll i=3; i*i<MAXN; i++) 
    { 
        // checking if i is prime 
        if (spf[i] == i) 
        { 
            // marking SPF for all numbers divisible by i 
            for (ll j=i*i; j<MAXN; j+=i) 
  
                // marking spf[j] if it is not  
                // previously marked 
                if (spf[j]==j) 
                    spf[j] = i; 
        } 
    } 
} 

vector<int> getFactorization(int x) 
{ 
    vector<int> ret; 
    while (x != 1) 
    { 
        ret.push_back(spf[x]); 
        x = x / spf[x]; 
    } 
    return ret; 
} 


int main(){
    fio
    ll n,tot=0;
    cin>>n;
    ll a[n+5],ans[n+5],b[n+5];
    fr(i,1,n+1){
        cin>>a[i];
    }
    ans[n]=a[n];
    for(ll i=n-1;i>=1;i--){
        ans[i]=__gcd(a[i],ans[i+1]);
    }
    fr(i,1,n){
        b[i]=(a[i]*ans[i+1])/__gcd(a[i],ans[i+1]);
    }
    tot=b[1];
    fr(i,2,n){
        tot=__gcd(tot,b[i]);
    }
    cout<<tot<<"\n";
    rr;
}
