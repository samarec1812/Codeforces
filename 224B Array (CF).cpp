//https://codeforces.com/problemset/problem/224/B?locale=ru
#include <vector>
#include <algorithm>
#include <iostream>
#include <map>

using namespace std;
using ll = long long;

int main()
{
    cin.tie(nullptr);
    ll n, k;
    cin >> n >> k;
    vector<int>a(n);
    for(ll i = 0; i < n; i++){
        cin >> a[i];
    }
    map<ll, ll> b;
    ll i = 0;
    for(i = 0; i < n; ++i){
        if(b.count(a[i]))
        {
            ++b[a[i]];
        } else {
            b[a[i]] = 1;
        }
        if(static_cast<ll>(b.size()) >= k) break;
    }
    ll left = 0;
    while(left < i){
        if(b.count(a[left]) && b[a[left]] > 1){
            --b[a[left]];
            left++;
        } else break;
    }

    if(static_cast<ll>(b.size() < k))
    {
        left = i = -2;
    }
    cout << left +1 << " " << i +1 <<"\n";
    return 0;
}

