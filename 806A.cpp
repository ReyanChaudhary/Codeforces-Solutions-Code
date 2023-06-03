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
        string s; cin>>s;
        ll c1=0,c2=0,c3=0;
        if(s[0]=='y' or s[0]=='Y') c1=1;
        if(s[1]=='e' or s[1]=='E') c2=1;
        if(s[2]=='s' or s[2]=='S') c3=1;
        if(c1+c2+c3==3) cout <<"YES\n";
        else cout << "NO\n";
     }
return 0;
}