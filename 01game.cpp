//KARMA IS A B***H
 
/****************************************************************************************************************************************************/
 
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define v(r) vector<r>
#define ff(i, a, b, c) for (ll i = a; i < b; i+=c)
#define fr(i, a, b, c) for(int i = a; i >= b; i-=c)
#define pb push_back
#define m(r,s) map<r,s>
/*#define mp make_pair
#define s(r) set<r>
#define v.in ff(i,0,n,1) {ll x; cin>>x; v.pb(x);}
#define a.in ff(i,0,n,1) cin>>a[i];
#define p(r,s) pair<r,s>
ll MOD = 1e9+7;*/
   
      
bool isPowerOfTwo(int n)
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
 
int setBitNumber(int n){
if (n == 0)
return 0;
int msb = 0;
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
 
int main(){
    
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);
     
     ll T; cin>>T;
     while(T--){
         ll t=0, p=0;
         string s; cin>>s;
         ff(i,0,s.length(),1){
             if(s[i]=='1') t++;
             else p++;
         }
         ll i = min(t,p);
         if(i%2==1) cout<<"DA\n";
         else cout<<"NET\n";
        }
return 0;
}