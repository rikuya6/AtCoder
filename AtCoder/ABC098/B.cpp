#include <iostream>
#include <algorithm>
#include <string>
#include <set>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int solve(const int n, string s)
{
    int max_count = 0;
    for (size_t i = 1; i < n; ++i) {
        string str1 = s.substr(0, i);
        string str2 = s.substr(i, n);
        set<char> str1_set;
        set<char> str2_set;
        for (auto e : str1)
            str1_set.insert(e);
        for (auto e : str2)
            str2_set.insert(e);
        int count = 0;
        for (auto e : str1_set) {
            if (str2_set.count(e))
                ++count;
        }
        max_count = max(max_count, count);
    }
    return max_count;
}

int main()
{
    int n;
    string s;
    cin >> n >> s;
    cout << solve(n, s) << endl;
}
