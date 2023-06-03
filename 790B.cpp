//Physics ka Chemistry ka Maths ka (nahi) magar sabka badla lega re tera ye c++
//prakrati ka niyam sabka ka***a
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define v(r) vector<r>
#define ff(i, a, b, c) for (ll i = a; i < b; i+=c)
#define fr(i, a, b, c) for(int i = a; i >= b; i-=c)
#define pb push_back
#define m(r,s) map<r,s>

void answer(){
    ll n; cin>>n; ll a[n]; ll q = 0;
    ff(i,0,n,1) {cin>>a[i]; q+=a[i];}
    ll mini = *min_element(a,a+n);
    ll p = mini*n;
    ll ans = abs(q-p);
    cout<<ans<<endl;
}
   
      
int main(){
    
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);
     
     ll t; cin>>t;
     while(t--){
         answer();
     }
return 0;
}