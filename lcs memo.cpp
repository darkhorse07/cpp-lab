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

ll dp[3001][3001];
string s,l;

ll lcs(ll n,ll m){
  if(n==0|| m==0){
    return 0;
  }
  if(dp[n][m]==-1){
  //fo(i,0,s.length()){
    if(s[n-1]==l[m-1])
    dp[n][m]=(1+lcs(n-1,m-1));
    else
    dp[n][m]=max(lcs(n,m-1),lcs(n-1,m));
  }
  return dp[n][m];
  //}
}

void solve(){
  ll n,m,i,j,k,sum=0,flag=0,t,ans=0;

  // cin>>n>>m;
  cin>>s>>l;
  n=s.length();
  m=l.length();
  mems(dp,-1);
  ll index =lcs(n,m);
  //out(lcs(s,s1,n-1,m-1));
  //out(n);
  char lc[index+1];
  lc[index] = '\0';
   i =n; j =m;
   // out(s);
   while (i > 0 && j > 0)
   {
      if (s[i-1] == l[j-1])
      {
           //out(s);
          lc[index-1] = s[i-1];
          i--; j--; index--;
      }
      else if (dp[i-1][j] > dp[i][j-1] )
         i--;
      else
         j--;
   }
   out(lc);
}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
      int test=1;
      // cin>>test;
      while(test--){
          solve();
      }

    return 0;
}
