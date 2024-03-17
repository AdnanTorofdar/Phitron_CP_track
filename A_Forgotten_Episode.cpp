#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define nl '\n'
#define fast                    \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define mod 1000000007
void me()
{
  ll n;
  cin>>n;
  vector<ll>v(n);
  ll m[n+1]={0};
  for(ll i=1;i<n;i++)
  {
    cin>>v[i];
    m[v[i]]++;
  }
  for(ll i=1;i<=n;i++)
  {
    if(m[i]==0) cout<<i;
    else continue;
  }
}
int main()
{
  fast;
  ll t = 1;
  //cin >> t;
  while (t--)
    me();
  return 0;
}