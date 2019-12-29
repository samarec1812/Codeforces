//https://codeforces.com/contest/371/problem/C
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <string>

using ll = long long;
using namespace std;
int main(){

    string s;
    cin >> s;

    ll PolikarpB, PolikarpS, PolikarpC;
    cin >> PolikarpB >> PolikarpS >> PolikarpC;
    ll priceB, priceS, priceC;
    cin >> priceB >> priceS >> priceC;
    ll moneyPolikarp; cin >> moneyPolikarp;


    ll a = 0 , b = 0, c = 0;
    for(const char& w: s ){
        if(w == 'B') ++a;
        else if(w == 'S') ++b;
        else if(w == 'C') ++c;
    }

    ll cur_min = 0, cur_max = 1000000000000;

    while(cur_min + 1 < cur_max){

        ll middle = (cur_min + cur_max) / 2;

        ll B = priceB * ((a * middle > PolikarpB) ? (a * middle - PolikarpB) : 0);
        ll S = priceS * ((b * middle > PolikarpS) ? (b * middle - PolikarpS) : 0);
        ll C = priceC * ((c * middle > PolikarpC) ? (c * middle - PolikarpC) : 0);
        ll sum = B + S + C;

        if(sum <= moneyPolikarp) cur_min = middle;
        else cur_max = middle;

    }

    cout << cur_min << "\n";

    return 0;
}


