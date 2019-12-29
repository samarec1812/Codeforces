//https://codeforces.com/problemset/problem/271/B?locale=ru
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
    const size_t MAX = 100100;
    vector<bool>f(MAX, true);
    f[0] = false;
    f[1] = false;

    for (int i = 2; i * i < MAX; ++i)
    {
        if (f[i])
        {
            for (int j = i + i; j < MAX; j += i)
            {
                f[j] = false;
            }
        }
    }

    int n, m, a;
    cin >> n >> m;
    vector<int>rows(500, 0), cols(500,0);
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
           cin >> a;
            int kol = a;
            while (!f[kol])
            {
                ++kol;
            }
            rows[i] += (kol - a);
            cols[j] += (kol - a);
        }
    }

    int min_row = *min_element(rows.begin(), rows.begin() + n);
    int min_col = *min_element(cols.begin(), cols.begin() + m);
   cout <<  min(min_row, min_col) << endl;
    return 0;
}

