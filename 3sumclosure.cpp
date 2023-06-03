// IT'S A SLOW PROCESS BUT QUITTING WON'T SPEED IT UP//
/*****************************************************/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define v(r) vector<r>
#define ff(i, a, b, c) for (ll i = a; i < b; i += c)
#define fr(i, a, b, c) for (int i = a; i >= b; i -= c)
#define pb push_back
#define m(r, s) map<r, s>
#define mp make_pair
#define s(r) set<r>
#define vin        \
    ff(i, 0, n, 1) \
    {              \
        ll x;      \
        cin >> x;  \
        v.pb(x);   \
    }
#define ain \
    ff(i, 0, n, 1) { cin >> a[i]; }
#define p(r, s) pair<r, s>
#define rsort sort(v.begin(), v.end(), greater<>());
ll MOD = 1e9 + 7;
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll T;
    cin >> T;
    while (T--)
    {
        ll n;
        cin >> n;
        ll a[n];

        ff(i, 0, n, 1) cin >> a[i];

        if (n == 3)
        {
            ll sum = 0;
            sort(a, a + n);
            ll i = 0, j = 0;
            bool f = 0;
            // ff(i,0,n,1) cout<<a[i] << " ";
            // cout << endl;
            // while(j<3)
            // {
            //     sum+=a[j];
            //     if(j-i+1<3)
            //     {
            //         j++;
            //     }
            //     else if(j-i+1==3){
            //         sum+=a[j];
            //         fr(l,0,j,1){
            //             if(sum==0){
            //                 ff(i,0,3,1)
            //                 {
            //                     if(a[i]==0)
            //                     f=1;
            //                     break;
            //                 }
            //             }
            //             else
            //             {   if(sum==a[i])
            //                 {
            //                     f=1;
            //                     break;
            //                 }
            //             }
            //             // else if(sum>a[i]){
            //             //     break;
            //             // }
            //         }
            //         sum-=a[i];
            //         i++;
            //         j++;
            //         if(f==1) break;
            //     }
            // }
            ff(i, 0, 3, 1) sum += a[i];
            // cout<<sum<<endl;
            if (sum == a[0] or sum == a[1] or sum == a[2])
                f = 1;

            if (f)
                cout << "YES\n";
            else
                cout << "NO\n";
            continue;
        }

        ll positive = 0, negative = 0;
        m(ll, ll) m;
        ff(i, 0, n, 1)
        {
            m[a[i]]++;
            if (a[i] < 0)
                negative++;
            if (a[i] > 0)
                positive++;
        }
        // ll index = max(positive, negative);
        // //            cout<<positive<<" "<<negative<<endl;
        // //            cout<<index<<endl;

        // if (index > 2)
        // {
        //     cout << "NO\n";
        // }

        // else if (index == 2)
        // {
        //     //                cout <<" debug1" << endl;
        //     if (n <= 4)
        //     {
        //         bool flag = true;

        //         if (!m[a[0] + a[1] + a[2]] or !m[a[0] + a[1] + a[3]] or !m[a[1] + a[2] + a[3]] or !m[a[0] + a[2] + a[3]])
        //             flag = false;

        //         if (flag)
        //             cout << "YES\n";
        //         else
        //             cout << "NO\n";
        //     }
        //     else
        //     {
        //         cout << "NO\n";
        //     }
        // }
        // else if (index == 1)
        // {
        //     bool flag = true;
        //     for (ll i : a)
        //     {
        //         // ll i=0
        //         if (m[i] != m[-i])
        //         {
        //             flag = false;
        //             break;
        //         }
        //     }
        //     if (index == 0)
        //         flag = true;
        //     if (flag)
        //         cout << "YES\n";
        //     else
        //         cout << "NO\n";
        // }
        // else
        //     cout << "YES\n";

         if(max(positive,negative) > 2) cout << "NO" << endl;
        else if(max(positive,negative) == 2){
            if(n > 4) cout << "NO" << endl;
            else{
                bool flag = true;
                
                if(!m[a[0]+a[1]+a[2]])
                flag = false;               
                if(!m[a[0]+a[1]+a[3]])
                flag = false;              
                if(!m[a[0]+a[2]+a[3]])
                flag = false;
                if(!m[a[1]+a[2]+a[3]])
                flag = false;
                if(flag) cout << "YES" << endl;
                else cout << "NO" << endl;
            }
        }
        else if(max(positive,negative) == 1){
            bool flag = true;
            for(int i : a){
                if(m[i] != m[-i]){
                    flag = false;
                    break;
                }
            }
            if(min(positive,negative) == 0)
            flag = true;
            if(flag) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
        else cout << "YES" << endl;
    }
    return 0;
}