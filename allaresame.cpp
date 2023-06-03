/***** IT'S A SLOW PROCESS BUT QUITTING WON'T SPEED IT UP *****/
// Reyan (24/08/2022) : : : : : : : :  : : : : :  : : : : : : : : : :: :

#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define endl "\n"
#define all(r) r.begin(), r.end()
#define double long long double
#define pb push_back
#define mp make_pair
#define in insert
#define ff(i, a, b, c) for (int i = a; i < b; i += c)
#define fr(i, a, b, c) for (int i = a; i >= b; i -= c)
#define vin(r, n)               \
    for (int i = 0; i < n; i++) \
    {                           \
        int x;                  \
        cin >> x;               \
        v.pb(x);                \
    }

const int N = 100010;
const int inf = 1e9;
const int MOD = 1e9 + 7;

/*<------------------------------------PBDS------------------------------------------------>*/
//#include<ext/pb_ds/assoc_container.hpp>
//#include<ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;

// order_of_key (val): returns the no. of values less than val
// find_by_order (k): returns the kth largest element.(0-based)
// declare variable as:  ordered_set A;
///////////////////////////////////////////////////////////////////////////////////////////////

/*<------------------------------------USEFUL DEBUGGING TOOLS------------------------------>*/
// void __print(int x) { cerr << x; }
// void __print(long x) { cerr << x; }
// void __print(long long x) { cerr << x; }
// void __print(unsigned x) { cerr << x; }
// void __print(unsigned long x) { cerr << x; }
// void __print(unsigned long long x) { cerr << x; }
// void __print(float x) { cerr << x; }
// // void __print(double x) { cerr << x; }
// // void __print(long double x) { cerr << x; }
// void __print(char x) { cerr << '\'' << x << '\''; }
// void __print(const char *x) { cerr << '\"' << x << '\"'; }
// void __print(const string &x) { cerr << '\"' << x << '\"'; }
// void __print(bool x) { cerr << (x ? "true" : "false"); }

// For now auto is sufficient:
void __print(auto x) { cerr << x; }

///////////////////////////////////////////////////////////////////////////////////////////////

template <class T>
inline constexpr T pow(const T base, unsigned const exponent)
{
    // (parentheses not required in next line)
    return (exponent == 0) ? 1 : (base * pow(base, exponent - 1));
}

/*<------------------------------------USEFUL MATHEMATICAL FUNCTIONS------------------------------>*/
// Seive ------>O(log(log(n)))
bool isprime[1000005];
void seive()
{
    for (int i = 0; i < N; i++)
    {
        isprime[i] = true;
    }
    isprime[0] = isprime[1] = false;
    for (int i = 2; i * i <= 1e6; i++)
    {
        if (isprime[i] == true)
        {
            for (int j = i * 2; j <= 1e6; j++)
            {
                isprime[j] = false;
            }
        }
    }
}
// MSB---->O(log(n))
int msb(int &n)
{
    int msb = 0;
    if (n == 0)
    {
        return 0;
    }
    n /= 2;
    while (n > 0)
    {
        n /= 2;
        msb++;
    }
    return (1 << msb);
}
// number of divisors
int numberofdivisors(int n)
{
    int count = 0;
    for (int i = 2; i * i < n; i++)
    {
        if (n % i == 0 and i * i == n)
        {
            count += 2;
        }
        else if (n % i == 0 and i * i != n)
        {
            count++;
        }
    }
    return count;
}

bool isPrime(int n)
{
    // Corner case
    if (n <= 1)
        return false;

    // Check from 2 to square root of n
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;

    return true;
}
// square root  ----> reduced complexity of O(log(n))
//  int squareroot(int &n)
//  {
//    int low = 1, high = n;
//    while(true)
//    {
//      int(low+(high-low))/2;
//      if(mid*mid > n) high = mid;
//      else if(mid*mid < n)
//      {
//        if(i == mid) low = mid +1;
//        else low = mid;
//      }
//      else return mid;
//    }
//  }

////////////////////////////////////////////////////////////////////////////////////////

/// CONDITION FOR DEBUGGING//////
#ifndef ONLINE_JUDGE
#define debug(x...)               \
    cerr << "[" << #x << "] = ["; \
    _print(x)
#else
#define debug(x...)
#endif
//////////////////////////////

int32_t main()
{

    // for txt format i/o
    //  #ifndef ONLINE_JUDGE
    //  freopen("input.txt", "r", stdin);
    //    freopen("output.txt", "w", stdout);
    // #endif

    // for fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T = 1;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        vector<int> v;
        vin(v, n);
        sort(all(v));
        int ans = 0;
        ff(i,0,n-1,1)
        {
            ans = __gcd(ans, (v[i + 1] - v[i]));
        }
        if(ans == 0)
            cout << -1 << endl;
        else
            cout << ans << endl;
    }
    return 0;
}