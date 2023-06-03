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
        ll n;
        cin>>n;
        string s;
        cin>>s;
        string ans="";
        //ll n = s.length()
        ff(i,0,n,1){
            if(s[i]=='1' and s[i+1]=='0'){
                continue;
                i++;
            }
            else{
                ans+=s[i];
            }
        }
        cout<<ans<<endl;
     }
return 0;
}