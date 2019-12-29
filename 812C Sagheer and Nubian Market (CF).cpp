/https://codeforces.com/problemset/problem/812/C?locale=ru
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;
using ll =  long long;

ll res(ll k, vector<ll>& a)
{
    vector<ll> b(static_cast<int>(a.size()));
    for (int i = 0; i < a.size(); i++)
    {
        b[i] = ((i + 1)*k + a[i]);
    }
    sort(b.begin(), b.begin() + a.size());
    ll ans = 0;
    for (int i = 0; i < k; i++)
    {
        ans += b[i];
    }
    return ans;
}


int main()
{

    int n, S;
    cin >> n >> S;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int l = 0, r = n + 1;
    while (l < r - 1)
    {
        int m = (l + r) / 2;
        if (res(m, a) <= S)
        {
            l = m;
        }
        else
        {
            r = m;
        }
    }
    cout << l << ' ' << res(l, a) << '\n';

    return 0;
}
