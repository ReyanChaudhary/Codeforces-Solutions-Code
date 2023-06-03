// بسم الله الرحمن الرحيم
// TEMPLATE ->REYAN :: UPDATED:(24/12/2022), MADE(24/08/2022)
// 

#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl '\n'
#define ldouble long long double
#define ff(i,a,b,c) for(int i = a; i<b; i++)
#define fr(i,a,b,c) for(int i = a; i>=b; i--)
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
signed main()
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
        int n; cin>>n; bool f = 0;
        vector<int> v; vin(v,n);
        vector<int> p = v;
        sort(all(v));
        //sabse greedy banega mai
        // if(n&1){
        //     bool ff = 1;
        //     int chk = v[0];
        //     ff(i,1,n-1,1){
        //         if(v[i] != v[i+1]){
        //             cout<<"NO\n";
        //             ff = 0;
        //             break;
        //         }
        //     }
        //     if(ff){
        //     if(v[1]^v[2] == chk) cout<<"YES\n";
        //     else cout<<"NO\n";
        //     }
        //     continue;
        // }
        if(n==2){
            if(v[0] == v[1]){
                cout<<"YES\n";
            }
            else{
                cout<<"NO\n";
            }
            continue;
        }
        int chk = 0;
        ff(i,0,n,1){
            chk^=p[i];
        }
        if(chk == 0){
            cout<<"YES\n";
            continue;
        }
        int target = 0;
        int cnt = 0;
        ff(i,0,n,1){
            target^=p[i];
            if(target == chk){
                cnt++;
                target=0;
            }
        }
        if(cnt > 2) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
