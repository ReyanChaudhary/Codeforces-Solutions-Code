//Physics ka Chemistry ka Maths ka (nahi) magar sabka badla lega re tera ye c++
//prakrati ka niyam sabka ka***a
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define v(r) vector<r>
#define ff(i, a, b, c) for (ll i = a; i < b; i+=c)
#define fr(i, a, b, c) for(int i = a; i >= b; i-=c)
#define pb push_back
   
      
int main(){
    
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);
     
     ll t; cin>>t;
     while(t--){
         ll n, count=0; cin>>n; ll a[n]; v(ll) b; 
         bool flag =true;
         ff(i,0,n,1) cin>>a[i];
         ff(i,0,n,1) b.pb(a[i]);
         sort(b.begin(),b.end());
         //if(n==1) {cout<<"YES"<<endl;}
             if(n%2==0){
                 ff(i,0,n-1,2){
                     if(a[i]>a[i+1]) swap(a[i],a[i+1]);
                 }
             }
             else{
                 ff(i,1,n-1,2){
                     if(a[i]>a[i+1]) swap(a[i],a[i+1]);
                 }
             }
             ff(i,0,n,1){
                 if(a[i]!=b[i]) flag = false;
             }
              if(flag) cout<<"YES\n";
                else cout<<"NO\n";
     }
return 0;
}   