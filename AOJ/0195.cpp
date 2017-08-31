#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define REP(i, j) for (int i = 0; i < j; i++)

int main()
{
  int a, b;
  char name[] = {'A', 'B', 'C', 'D', 'E'};
  while (cin >> a >> b, a || b) {
    vector<pair<int, char>> d{make_pair(a + b, name[0])};
    REP(i, 4) {
      cin >> a >> b;
      d.push_back(make_pair(a + b, name[i + 1]));
    }
    sort(d.begin(), d.end(), greater<pair<int, char>>());
    cout << d[0].second << " " << d[0].first << endl;
  }
  return 0;
}
