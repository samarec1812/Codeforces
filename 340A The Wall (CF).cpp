//https://codeforces.com/contest/340/problem/A
#include <iostream>
#include <algorithm>

using namespace std;
using ll = long long;
int gcd(int x, int y) {
    if (y == 0)
        return x;
    return gcd(y, x % y);
}

int solution(int x, int y, int F) {
    ll lcm =  x * y;
    lcm = lcm / gcd(x, y);
    return F / lcm;
}

int main() {
    int x, y, A, B;
    cin >> x >> y >> A >> B;
    cout << solution(x, y, B) - solution(x, y, A - 1);
    return 0;
}