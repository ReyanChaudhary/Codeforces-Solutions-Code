#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define endl '\n'

signed main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            if(i%4==0 or i%4 ==3)
                cout << "b";
            if(i%4==2 or i%4==1)
                cout << "a";
        }
        cout << endl;
    }
    return 0;
}