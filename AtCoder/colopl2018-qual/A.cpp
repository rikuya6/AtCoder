#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int main() {
  size_t a, b;
  string s;
  cin >> a >> b >> s;
  if (s.size() >= a && s.size() <= b)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
}
