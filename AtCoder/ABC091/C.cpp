#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

typedef pair<int, int> P;

int main()
{
  int N;
  vector<P> red, blue;
  cin >> N;
  REP(i, N) {
    int a, b;
    cin >> a >> b;
    red.push_back(make_pair(a, b));
  }
  REP(i, N) {
    int c, d;
    cin >> c >> d;
    blue.push_back(make_pair(c, d));
  }
  sort(red.begin(), red.end());
  sort(blue.begin(), blue.end());
  int cnt = 0;
  bool used[N];
  fill(used, used + N, false);
  REP(i, N - 1) {
    FOR(k, 1, N) {
      if (red[i].first < blue[k].first && red[i].second < blue[k].second && !used[k]) {
        cnt++;
        used[k] = true;
        break;
      }
    }
  }
  cout << cnt << endl;
}
