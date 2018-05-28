#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
#define FOR(i, a, b) for (size_t i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

const int MAX_V = 2000001;
int w_table[MAX_V];
int e_table[MAX_V];

void calc_table(const int& n, const string& s)
{
    w_table[0] = 0;
    e_table[0] = 0;
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

int solve(const int n, string s)
{
    int count = 1;
    FOR(i, 1, n + 1) {
        count = min(count, w_table[i - 1] + e_table[n] - e_table[i]);
    }
    return count;
}

int main()
{
    int n;
    string s;
    cin >> n >> s;
    calc_table(n, s);
    // REP(i, n + 1)
    //     cout << w_table[i] << " ";
    // cout << endl;
    // REP(i, n + 1)
    //     cout << e_table[i] << " ";
    // cout << endl;
    cout << solve(n, s) << endl;
}

