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
        int n;
        cin >> n;
        if(n==1) cout << 2 << "\n";
        else 
        {
            cout << (n+2)/3 << "\n";
        }
        //qque reading mistake i found exact no. of steps required to reach whereas simply time was needed to find
        // else if(n%2==0)
        // {
        //     cout << n/2 << "\n";
        // }
        // else if(n%5==0)
        // {
        //     cout << (n/5)*2 << "\n";
        // }
        // else
        // {
        //     cout << 2*n << "\n";
        // }
     }
return 0;
}