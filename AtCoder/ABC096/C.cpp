#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int H, W;
vector<string> s;
vector<string> m;
const int dx[] = {1, -1, 0, 0};
const int dy[] = {0, 0, 1, -1};

void paint(const int y, const int x)
{
  REP(i, 4) {
    int nx = x + dx[i];
    int ny = y + dy[i];
    if (nx < 0 || nx >= W || ny < 0 || ny >= H) continue;
    if (m[ny][nx] == '#') {
      s[y][x] = '.';
      s[ny][nx] = '.';
    }
  }
}

bool check()
{
  REP(i, H) {
    // cout << s[i] << endl;
    REP(k, W) {
      if (s[i][k] == '#')
        return false;
    }
  }
  return true;
}

int main()
{
  cin >> H >> W;
  REP(i, H) {
    string str;
    cin >> str;
    s.push_back(str);
    m.push_back(str);
  }
  REP(i, H) {
    REP(k, W) {
      if (m[i][k] == '#')
        paint(i, k);
    }
  }
  if (check())
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}
