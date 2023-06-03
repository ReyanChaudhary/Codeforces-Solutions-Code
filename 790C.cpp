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
   
      
int main(){
    
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);
     
     ll t, sum =0; cin>>t;
     while(t--){
         ll n,m; cin>>n>>m;
         v(string) v; v(ll) ans;
         ff(i,0,n,1){
             string s; cin>>s; v.pb(s);
         }
         ff(i,0,n,1){
             ff(j,i+1,n,1){
             ff(k,0,m,1){         
              sum+=abs(v[i][k]-v[j][k]);     
             }
              ans.pb(sum);
              sum-=sum;
             }
         }
         ll answ = *min_element(ans.begin(),ans.end());
         cout<<answ<<"\n";
     }
return 0;
}