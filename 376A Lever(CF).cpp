//https://codeforces.com/problemset/problem/376/A?locale=ru
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
using ll = long long;
int main(){

    string s; cin >> s;
    auto Pos = s.find('^');
    ll left = 0, right = 0;

    for(auto i = 0; i < Pos; i++)
    {
        if(s[i] != '='){
            left += (Pos - i) * (s[i] - '0');
        }
    }
    for(size_t i = Pos + 1; i < s.size(); i++){
        if(s[i] != '='){
            right += (i - Pos) * (s[i] - '0');
        }
    }

    if(left == right)
    {
        cout << "balance" << endl;
    } else if(left < right)
    {
        cout << "right" << endl;
    } else
        {
        cout << "left" << endl;
        }

    return 0;
}