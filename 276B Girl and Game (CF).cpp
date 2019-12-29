//https://codeforces.com/problemset/problem/276/B?locale=ru
#include <algorithm>
#include <iostream>
#include <string>
#include <map>

using namespace std;
int main(){
    string s;
    cin >> s;
    map<char, int>a;
    for(const auto& w: s){
        a[w] = count(s.begin(), s.end(), w);
    }
    int sum = 0;
    for(const auto& w: a){
        if(w.second % 2 == 1) sum++;
    }
    if(sum == 1 || sum == 0) cout << "First";
    else if(sum % 2 == 0) cout << "Second";
    else if(sum % 2 == 1) cout << "First";


    return 0;
}

