#include <iostream>

using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main()
{
  int n, m, t;
  cin >> n >> m >> t;
  bool time[t];
  fill(time, time + t, false);
  REP(i, n) {
    int a;
    cin >> a;
    REP(k, m) {
      int before_time = a - 1 - k, after_time = a + k;
      if(before_time >= 0 && before_time < t) time[before_time] = true;
      if(after_time >= 0 && after_time < t) time[after_time] = true;
    }
  }
  int study_time = 0;
  REP(i, t)
    if(! time[i]) study_time++;
  cout << study_time << endl;
}
