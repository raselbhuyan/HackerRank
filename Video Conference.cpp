/* nothing is impossible */
#include <bits/stdc++.h> 
 
#define mp make_pair
#define mt make_tuple
#define eb emplace_back
#define fi first
#define se second
#define ff first
#define ss second
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define forn(i, n) for (int i = 0; i < (int)(n); ++i)
#define for1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define ford(i, n) for (int i = (int)(n) - 1; i >= 0; --i)
#define fore(i, a, b) for (int i = (int)(a); i <= (int)(b); ++i)
using namespace std;
typedef long long ll;
typedef vector<ll> vi;
typedef vector<vi> vvi;
typedef pair<ll, ll> pii;
typedef long double ld;
typedef string st;
const double PI=3.141592653;
const ll MOD = 1e9 + 7 ;
const ll INF=1e14;                                                                                           
ll mpow(ll a,ll b,ll p=MOD){a=a%p;ll res=1;while(b>0){if(b&1)res=(res*a)%p;a=(a*a)%p;b=b>>1;}return res%p;}             
const ll N=100000008;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  ll n;
  cin>>n;
  map<st,ll> ma;
  map<st,ll> mo;
  while(n--)
  {
    st s;
    cin>>s;
    if(mo[s]!=0)
    {
      cout<<s<<" "<<mo[s]+1<<"\n";
      mo[s]++;
      continue;
    }
    mo[s]++;
    st a="";
    bool f=false;
    st ans;
    forn(i,s.length())
    {
      a+=s[i];
      if(ma.count(a)==0&&f==false)
      {
        ans=a;
        f=true;
      }
      ma[a]++;
    }
    if(f) cout<<ans<<"\n",ma[ans]++;
    else{
      cout<<s<<"\n";
    }
  }  
  return 0;   
}
