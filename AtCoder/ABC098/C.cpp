#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
#define FOR(i, a, b) for (size_t i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

const int MAX_V = 100001;
int w_table[MAX_V];
int e_table[MAX_V];

void calc_table(const int& n, const string& s)
{
    for (size_t i = 1; i <= n; ++i)
        if (s[i - 1] == 'W') {
            w_table[i] = w_table[i - 1] + 1;
            e_table[i] = e_table[i - 1];
        }
        else {
            e_table[i] = e_table[i - 1] + 1;
            w_table[i] = w_table[i - 1];
        }
    }
}

int solve(const int n, string s)
{
    int min_counter = 1 << 30;
    REP(i, n) {
        int count = 0;
        count = w_table[i + 1] + e_table[i + 1] - 1;
        // if (s[i] == 'W') {
        //     count += w_table[i];
        //     count += e_table[n - 1] - e_table[i + 1];
        // } else {
        //     count += e_table[i] - e_table[i];
        //     count += w_table[n]; //  - w_table[i + 1];
        // }
        if (count == 0) continue;
        cout << count << endl;
        min_counter = min(min_counter, count);
    }
    return min_counter;
}

int main()
{
    int n;
    string s;
    cin >> n >> s;
    calc_table(n, s);
    REP(i, n + 1)
        cout << w_table[i] << " ";
    cout << endl;
    REP(i, n + 1)
        cout << e_table[i] << " ";
    cout << endl;
    cout << solve(n, s) << endl;
}

