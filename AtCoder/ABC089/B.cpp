#include <iostream>
#include <string>
#include <set>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int main()
{
  int n;
  cin >> n;
  string s;
  set<string> st;
  REP(i, n) {
    cin >> s;
    st.insert(s);
  }
  cout << (st.size() == 4 ? "Four" : "Three") << endl;
}
