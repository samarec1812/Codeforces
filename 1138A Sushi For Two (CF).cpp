#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;
using ll =  long long;

int main()
{
    int n;
    cin >> n;
    vector<int>a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    int length1 = 0, length2 = 0;
    length1 = (a[0] == 1) ? 1 :0;
    length2 = (a[0] == 2) ? 1 : 0;
    int current = 0, max1 = 0;
    for(int i = 1; i < n; i++){
        if(a[i] == 1 && a[i-1] == 1) length1++;
        else if(a[i] == 2 && a[i-1] == 2) length2++;
        else if(a[i] == 1 && a[i-1] == 2) length1 = 1;
        else if(a[i] == 2 && a[i-1] == 1) length2 = 1;
        current = min(length1, length2);
        max1 = max(max1, current);
    }
    cout << 2* max1 << endl;
    return 0;
}
