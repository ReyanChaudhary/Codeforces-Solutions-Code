//IT'S A SLOW PROCESS BUT QUITTING WON'T SPEED IT UP//
/*****************************************************/ 
#include<bits/stdc++.h>
using namespace std;
#define ll long long
// #define v(r) vector<r>
// #define ff(i, a, b, c) for (ll i = a; i < b; i+=c)
// #define fr(i, a, b, c) for(int i = a; i >= b; i-=c)
// #define pb push_back
// #define endl
// #define m(r,s) map<r,s>
// #define mp make_pair
// #define s(r) set<r>
// #define vin ff(i,0,n,1){ll x;cin>>x;v.pb(x);}
// #define ain ff(i,0,n,1){cin>>a[i];}
// #define p(r,s) pair<r,s>
// #define rsort sort(v.begin(),v.end(),greater<>());
ll MOD = 1e9+7;

bool dist(vector<int> &v, int n, int c, int d )
{
    int prev = v[0];
    --c;
    for (int i = 1; i < n; i++)
    {
        if(v[i] - prev >= d)
        {
            c--;
            prev = v[i];
        }
    }
    return c <= 0;
}

int main(){
    
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);
     
     ll T; cin>>T;
     while(T--){
         int n, c;
         cin >> n >> c;
         vector<int> v(n);
         for (int i = 0; i < n; i++)
         {
             cin >> v[i];
         }
         sort(v.begin(), v.end());
         int low = 0, high = 1e9;
         while(high-low>1)
         {
            int mid = (low) + (high - low) / 2;
            if(dist(v, n, c, mid))
            {
                low = mid;
            }
            else{
                high = mid - 1;
            }
         }
         if(dist(v, n, c, high))
         {
             cout << high << endl;
         }
         else
         {
             cout << low << endl;
         }
     }
return 0;
}