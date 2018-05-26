#include <iostream>
#include <algorithm>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int main()
{
    int a, b;
    cin >> a >> b;
    cout << max(a + b, max(a - b, a * b)) << endl;
}
