#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int main() {
  string s;
  cin >> s;
  if (s == "A")
    cout << "T" << endl;
  else if (s == "T")
    cout << "A" << endl;
  else if (s == "C")
    cout << "G" << endl;
  else if (s == "G")
    cout << "C" << endl;
}
