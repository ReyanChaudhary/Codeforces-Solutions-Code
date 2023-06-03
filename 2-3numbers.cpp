#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define endl '\n'

bool ispowerof2(int &n)
{
    while(n!=1)
    {
        if (n % 2 != 0)
            return false;
        n /= 2;
    }
    return true;
}

signed main()
{
    // sieveoferatosthenes();
    int t = 1;
    // cin >> t;
    while (t--)
    {
        int l, r;
        cin >> l >> r;
        int ans = 0;
        // int a = 2, b = 3;
        // while(a<=r)
        // {
        //     if(a>=l)
        //     {
        //     ans++;
        //     // cout << a << endl;
        //     }
        //     a *= 2;
        // }
        // while(b<=r)
        // {
        //     if(b>=l)
        //     {
        //     ans++;
        //     // cout << b << endl;
        //     }
        //     b *= 3;
        // }
        // int start = l;
        // if(l%6)
        // {
        //     for (int i = 0; i < 10; i++)
        //     {
        //         if(start%6 == 0)
        //         {
        //             break;
        //         }
        //         start++;
        //     }
        // }
        // cout << start << endl;
        // for (int i = start; i <= r; i+=6)
        // {
        //     //total iterations max : 33333333.333
        //     int temp = i;
        //     while (true)
        //     {
        //         if (temp % 3 != 0)
        //         {
        //             break;
        //         }

        //         temp /= 3;
        //         // around 30 more iterations 
        //     }
        //     if(ispowerof2(temp))
        //     {
        //         // cout << i << endl;
        //         ans++;
        //     }
        // }
        // result in timeout

        // if(l == 1)
        //         ans++;

        int a = 1, b = 1;
        for (int i = 1; i <= r;i*=2)
        {
            //total rnd 31 iterations
            for (int j = 1; j <= r; j*=3)
            {
                // even less than 31 iterations'
                //total complexity : ~1000
                //above complexity : 1e10
                if(i*j >= l and i*j <= r)
                {
                    ans++;
                }
            }
        }
            cout << ans << endl;
    }
}