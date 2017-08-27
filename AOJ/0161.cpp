#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define REP(i, j) for (int i = 0; i < j; i++)

int main()
{
  int n;
  while (cin >> n, n) {
    int id, m1, s1, m2, s2, m3, s3, m4, s4;
    vector<pair<int, int> > score;
    while (n--) {
      cin >> id >> m1 >> s1 >> m2 >> s2 >> m3 >> s3 >> m4 >> s4;
      int time_sum = m1 * 60 + s1 + m2 * 60 + s2 + m3 * 60 + s3 + m4 * 60 + s4;
      score.push_back(make_pair(time_sum, id));
    }
    sort(score.begin(), score.end());
    cout << score[0].second << endl;
    cout << score[1].second << endl;
    cout << score[score.size() - 2].second << endl;
  }
  return 0;
}
