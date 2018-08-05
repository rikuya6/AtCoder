#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int n, study_sum{};
  cin >> n;
  for (int i = 0; i < n; ++i) {
    int s, e;
    cin >> s >> e;
    study_sum += e - s;
  }
  int need_time = n * 3 + 3, day_off_s;
  cin >> day_off_s;
  // cout << need_time << " " << study_sum << endl;
  cout << need_time - study_sum + day_off_s << endl;
}
