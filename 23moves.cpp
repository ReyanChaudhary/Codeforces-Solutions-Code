//IT'S A SLOW PROCESS BUT QUITTING WON'T SPEED IT UP//
/*****************************************************/

#include <bits/stdc++.h>
using namespace std;
#define int           long long int
#define endl          "\n"
#define all(r)        r.begin(), r.end()
#define double        long long double
#define pb            push_back
#define mp            make_pair
//#define ff(i,0,n,1) for(int i = 0; i<n; i++) 

const int N = 100010;

int inf = 1e9;
int MOD = 1e9 + 7;

template<class T>
inline constexpr T pow(const T base, unsigned const exponent)
{
    // (parentheses not required in next line)
    return (exponent == 0) ? 1 : (base * pow(base, exponent-1));
}


int32_t main() {

	//for txt format i/o
	 // #ifndef ONLINE_JUDGE
	 // freopen("input.txt", "r", stdin);
  //    freopen("output.txt", "w", stdout);
	 // #endif

   //for fast I/O
   ios_base::sync_with_stdio(false);
   cin.tie(NULL); cout.tie(NULL);

    int T; 
    cin >> T;
    while(T--)
    {
    	int n;
    	cin >> n;

    	// int ans = n/3 + n%3;
    	int ans  = (n+2)/3;

    	if(n==1)
    	{
    		cout << 2 << endl;
    	}
    	else
    	{
    		cout << ans << endl;
    	}
    }
    return 0;
}