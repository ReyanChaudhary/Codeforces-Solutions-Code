//Physics ka Chemistry ka Maths ka (nahi) magar sabka badla lega re tera ye c++
//prakrati ka niyam sabka ka***a
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define v(r) vector<r>
#define ff(i, a, b, c) for (ll i = a; i < b; i+=c)
#define fr(i, a, b, c) for(int i = a; i > b; i-=c)
#define pb push_back
   
      
int main(){
    
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);
     
     ll t; cin>>t;
     while(t--){
         ll n, count =0; cin>>n; ll a[n]; v(ll) b;
         ff(i,0,n,1) cin>>a[i];
        ll j = 0;
        if(n%2==1 && n>1) {j+=1;}
        else if(n%2==0 &&n>1) {j=0;}

        if(n==1) {
        cout<<"YES\n";
        }
        else{
        fr(i,n,j,2){
            if(a[i-1]>a[i]){
                swap(a[i],a[i-1]);
            }
        }
        bool flag = true;
        ff(i,j,n-1,1){
            if(a[i-1]>a[i]){
                flag = false;
                cout<<"NO\n";
                break;
            }
        }
        if(flag) cout<<"YES\n";
        }
     }
return 0;
}