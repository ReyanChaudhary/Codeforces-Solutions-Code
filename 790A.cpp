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
     
     ll t, s1=0, s2=0; cin>>t;
     while(t--){
         string s; cin>>s;
         //ll n = 6; ff(i,0,s.length()/2,1){s1+=s[i];}
         //ff(i,3,s.length(),1){s2+=s[i];}
         s1 = s[0]+s[1]+s[2];
         s2= s[3]+s[4]+s[5];
    if(s1==s2) cout<<"YES\n";
    else cout<<"NO\n";
     }
return 0;
}