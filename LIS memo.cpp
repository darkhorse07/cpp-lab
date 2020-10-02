#include <bits/stdc++.h>
using namespace std;
#define en '\n'
#define out(x) cout << (x) << en
#define yes cout << "YES" << en
#define no  cout << "NO" << en
#define mems(arr,VAL)     memset(arr,VAL,sizeof(arr))
#define ll long long
#define vll vector<ll>
#define fo(i, a, b) for(ll i = a; i < b; i++)
#define fi first
#define se second
#define pb push_back
#define in insert
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define sz(a) int(a.size())
#define pll pair<ll, ll>
#define plll pair<ll, pll>
#define vpll vector<pll>
#define vplll vector<plll>
#define lbnd lower_bound
#define ubnd upper_bound
#define bs   binary_search
#define mi map<ll,ll>
#define gcd(a,b)    __gcd((a),(b))
#define lcm(a,b)    ((a)*(b)) / gcd((a),(b))
#define tle 1000000007
ll dp[100000];
ll power(ll a, ll b)
{
    ll res=1;
    while(b>0)
    {
        if(b%2)
        res = (res*a)%tle;
        b/=2;
        a = (a*a)%tle;
    }
    return res;
}
bool cmp(pll p1,pll p2){
  return p1.fi<p2.fi;
}
ll lis(ll a[], ll n){
  if(!dp[n-1]){
  if(n==1)
  dp[0]=1;
  else{
  fo(i,1,n){
  if(a[n-1]>a[n-1-i])
  dp[n-1]=max(1+lis(a,n-i),dp[n-1]);
  else if(!dp[n-1]){
  dp[n-1]=1;

  if(!dp[n-i-1])
  dp[n-i-1]=lis(a,n-i);
  }
}
 }
}
return dp[n-1];
}
void solve(){
  ll n,m,i,j,k,l,sum=0,flag=0,t,ans=0;
  string s,s1="",s2;
  mems(dp,0);
  cin>>n;
  ll a[n];
  fo(i,0,n)
  cin>>a[i];
  lis(a,n);
  fo(i,0,n){
    out(dp[i]);
    //ans=max(ans,dp[i]);
  }
  //out(ans);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
      int test=1;
      //cin>>test;
      while(test--){
          solve();
      }

    return 0;
}
