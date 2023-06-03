#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define endl '\n'
#define double long long double

signed main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
    //     set<int> a, b, c;
    //     for (int i = 0; i < n; i++)
    //     {
    //         int x;
    //         cin >> x;
    //         a.insert(x);
    //     }
    //     // for(auto it : a)
    //     // {
    //     //     cout << it << " ";
    //     // }
    //     // cout << endl;
    //     for (int i = 0; i < n-1; i++)
    //     {
    //         int x;
    //         cin >> x;
    //         b.insert(x);
    //     }
    //     for (int i = 0; i < n-2; i++)
    //     {
    //         int x;
    //         cin >> x;
    //         c.insert(x);
    //     }
    //     if(a.size() != b.size() and b.size() !=c.size())
    //     {
    //     int a1 = 0, a2 = 0;
    //     for(auto &it : a)
    //     {
    //         if(b.find(it) == b.end())
    //         {
    //             a1 = it;
    //             break;
    //         }
    //     }
    //     for(auto &it : b)
    //     {
    //         if(c.find(it) == c.end())
    //         {
    //             a2 = it;
    //             break;
    //         }
    //     }
    //     cout << a1 << endl;
    //     cout << a2 << endl;
    // }
    // else
    // {
        vector<int> aa(n), bb(n - 1), cc(n - 2);
        for (int i = 0; i < n; i++)
        {
            cin >> aa[i];
        }
        for (int i = 0; i < n-1; i++)
        {
            cin >> bb[i];
        }
        for (int i = 0; i < n-2; i++)
        {
            cin >> cc[i];
        }
        sort(aa.begin(), aa.end());
        sort(bb.begin(), bb.end());
        sort(cc.begin(), cc.end());
        int a3 = 0, a4 = 0;
        for (int i = 0; i < n-1; i++)
        {
            if(aa[i] != bb[i])
            {
                a3 = aa[i];
                break;
            }
        }
        if(a3 == 0)
        {
            a3 = aa[n - 1];
        }
        for (int i = 0; i < n - 2; i++)
        {
            if (bb[i] != cc[i])
            {
                a4 = bb[i];
                break;
            }
        }
        if(a4 == 0)
        {
            a4 = bb[n - 2];
        }
        cout << a3 << endl
             << a4 << endl;
    // }
    }
    return 0;
}