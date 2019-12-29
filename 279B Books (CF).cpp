//https://codeforces.com/problemset/problem/279/B
#include <vector>
#include <algorithm>
#include <iostream>
#include <string>
#include <map>

using namespace std;
int main(){
    int n, t;
    cin >> n >> t;
    vector<int>a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int ans = 0, right = 0, sum = 0;
    for(int i = 0; i < n; i++){
        while(right < n && sum + a[right] <=t){
            sum +=a[right];
            right++;
        }
        ans = max(ans, right - i);
        sum -= a[i];
    }
    cout << ans << endl;
    return 0;
}

