//IT'S A SLOW PROCESS BUT QUITTING WON'T SPEED IT UP//
/*****************************************************/ 
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define v(r) vector<r>
#define ff(i, a, b, c) for (ll i = a; i < b; i+=c)
#define fr(i, a, b, c) for(int i = a; i >= b; i-=c)
#define pb push_back
#define endl
#define m(r,s) map<r,s>
#define mp make_pair
#define s(r) set<r>
#define vin ff(i,0,n,1){ll x;cin>>x;v.pb(x);}
#define ain ff(i,0,n,1){cin>>a[i];}
#define p(r,s) pair<r,s>
#define rsort sort(v.begin(),v.end(),greater<>());
ll MOD = 1e9+7;
int main(){
    
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);
     
     ll T; cin>>T;
     while(T--){
        ll n,i=1; cin>>n; ll a[n]; ain;
        m(ll,ll) m;
        ff(i,0,n,1) m[a[i]]++;
        ll even =0, odd = 0;
        for(auto &x :m)
        {
            if(x.second&1) odd++;
            else even++;
        }
        // if(odd%2==0 and even%2==0) cout << even+odd << "\n";
        // else if (odd%2!=0 and even%2==0) cout << max(i,even+(odd-2)) << "\n";
        // else if (odd%2==0 and even%2!=0) cout << max(i,(even-1)+odd) << "\n";
        // else if(even%2!=0 and odd%2!=0)  cout << max(i,even-1+odd-2) << "\n";

        if(even%2==0) cout << even + odd << "\n";
        else cout << even+odd-1 << "\n";
     }
return 0;
}