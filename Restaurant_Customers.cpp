#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);


int main ()

{
op();
  ll q;
  cin>>q;
  const ll N=1e5 +2;
  ll mod=1e5;
  vector<pair<ll,ll>>d;
  while (q--)
  {
    ll m,n;
    cin>>m>>n;
    // cout<<m<<" "<<n<<endl;
    d.push_back({m,1});
    d.push_back({n,-1});
  }
  sort(d.begin(),d.end());
  ll sum=0;
  ll ans=LLONG_MIN;
for (ll i = 0; i <d.size(); i++)
{
    sum+=d[i].second;
   ans=max(sum,ans);
    
}


cout<<ans<<endl;
    return 0;
}