#include <iostream>
#include <string>
#include <map>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int main()
{
  int N, M;
  map<string, int> mp;
  cin >> N;
  REP(i, N) {
    string s;
    cin >> s;
    mp[s]++;
  }
  cin >> M;
  REP(i, M) {
    string s;
    cin >> s;
    mp[s]--;
  }
  int max = 0;
  for (auto it = mp.begin(); it != mp.end(); ++it)  {
    max = std::max(it->second, max);
  }
  cout << max << endl;
}
