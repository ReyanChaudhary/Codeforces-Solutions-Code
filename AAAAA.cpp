// بسم الله الرحمن الرحيم
// TEMPLATE ->REYAN :: UPDATED:(24/12/2022), MADE(24/08/2022)
// 

#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl '\n'
#define ldouble long long double
#define ff(i,a,b,c) for(int i = a; i<b; i+=c)
#define fr(i,a,b,c) for(int i = a; i>=b; i-=c)
#define all(r) r.begin(),r.end()
#define set_precision(a) cout<<fixed<<setpricision(a)
#define pb push_back
#define in insert
#define make_pair
#define maxima(v) *max_element(v.begin(),v.end())
#define minima(v) *min_element(v.begin(),v.end())
#define vin(v, n) for(int i=0;i<n;i++){int x;cin>>x;v.pb(x);}

const int N = 1e6 + 10;
const int inf = 1e9;
const int MOD = 1e9 + 7;

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" : "; _print(x); cerr << endl;
#else
#define debug(x)
#endif 

void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
// void _print(double t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(unsigned long long t) {cerr << t;}
 
template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T, class V> void _print(map <T, V> v);
template <class T, class V> void _print(unordered_map<T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.first); cerr << ","; _print(p.second); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(unordered_map<T, V> v)  {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
// void _print(pbds v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

//fnxs//
int b_raised_a(int &a, int &b){int ans = 1;while (b > 0){if (b & 1)ans = ans * a;a = a * a;b >>= 1;}return ans;}
int BIT_tree[N] = {};void update(int i, int x){ for (; i <= N; i += (i & -i)) { BIT_tree[i] += x; }} 
int sum(int i){ int summation = 0; for (; i > 0; i -= (i & -i)) { summation += BIT_tree[i]; } return summation;}
vector<bool> isprime(N + 1, true);void sieveoferatosthenes(){isprime[0]=isprime[1]=false;for (int i=2;i<=sqrt(N);i++){if(isprime[i]==true){for (int j = i * i; j <= N; j += i)isprime[j] = false;}}}
void google(int t) { cout << "Case #" << t << ": "; }
//////////////////////////////////////////////////////////

signed main( )
{
  #ifdef ONLINE_JUDGE
  freopen("Error.txt","w",stderr);
  #endif
  ios::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
    int T = 1;
    cin >> T;
    while (T--)
    {
        int n; cin>>n;
        int c1 = n/2, c2 = 2*n-c1;
        int q = c1^c2;
        debug(q);
        if(q == n and !(n&1)){
            cout<<c1<<" "<<c2<<endl;
            continue;
        }
        cout<<-1<<endl;
    }
    return 0;
}
