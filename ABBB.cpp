//IT'S A SLOW PROCESS BUT QUITTING WON'T SPEED IT UP//
/*****************************************************/ 
 
 
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define v(r) vector<r>
#define ff(i, a, b, c) for (ll i = a; i < b; i+=c)
#define fr(i, a, b, c) for(int i = a; i >= b; i-=c)
#define pb push_back
#define m(r,s) map<r,s>
#define mp make_pair
#define s(r) set<r>
#define vin ff(i,0,n,1){ll x;cin>>x;v.pb(x);}
#define ain ff(i,0,n,1){cin>>a[i];}
#define p(r,s) pair<r,s>
#define rsort sort(v.begin(),v.end(),greater<>());
ll MOD = 1e9+7;
   
      
bool isPowerOfTwo(ll &n)
{
if (n == 0)
return 0;
while (n != 1)
{
if (n%2 != 0)
return 0;
 n = n/2;
}
return 1;
}
 
ll setBitNumber(ll &n){
if (n == 0)
return 0;
ll msb = 0;
n = n / 2;
while (n != 0) {
n = n / 2;
msb++;
}
return (1 << msb);
}
bool isPrime(int n){
if (n <= 1)
return false;
for (int i = 2; i <= sqrt(n); i++)
if (n % i == 0)
return false;
return true;
}
long long gcd(long long int a, long long int b){
if (b == 0)
return a;
return gcd(b, a % b);
}
  
long long lcm(int a, int b){
return (a / gcd(a, b)) * b;
}
 
int main(){
    
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);
     
     ll T; cin>>T;
     while(T--){
         /*string s; cin>>s;
         if(s.length()==1){
             cout<<1<<endl;
         }
         else{
         ff(i,0,s.length()-1,1){
             if(s[i]=='A' and s[i+1]=='B'){
                 s.erase(i);
                 s.erase(i+1);
                 i=0;
             }
             if(s[i]=='B' and s[i+1]=='B'){
                 s.erase(i);
                 s.erase(i+1);
                 i=0;
             }
         }*/
        // cout<<s<<endl;
         int a=0, b =0;
         /*ff(i,0,s.length(),1){
             if(s[i]=='A') a++;
             else b++;
         }*/
        // ll i = min(a,b);
         //ll j = max(a,b);
        // ll ans = s.length();
        // if(i==j and i+j>2) ans-=ans;
        /*if(s[0]=='A' and s[1]=='B') ans-=2;
        if(s[0]=='B' and s[1]=='B') ans-=2;
         cout << ans << "\n";
     }*/

     string s, ans =""; cin>>s; ll n = s.size();
     ff(i,0,n-1,1){
         if(s[i]=='A' and s[i+1]=='B'){
            s.erase(i,1);
            s.erase(i,1);
            i-=2;
         }
         if(s[i]=='B' and s[i+1]=='B'){
             s.erase(i,1);
             s.erase(i,1);
             i-=2;
         }
     }
     cout<<s.length()<<"\n";
     }
return 0;
}