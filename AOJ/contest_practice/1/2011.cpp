// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=2011

#include <iostream>
#include <algorithm>

using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++ )

int n;
bool p_schedules[50][31];
long long dp[50][31];

int solve(const long long &goal)
{
  for(int day = 1; day < 31; day++) {
    REP(own, n) {
      if(p_schedules[own][day]) {
        REP(other, n) {
          if(p_schedules[other][day]) {
            dp[own][day] |= dp[other][day - 1];
          }
        }
      }else{
        dp[own][day] |= dp[own][day - 1];
      }
      if(dp[own][day] == goal)
        return day;
    }
  }
  return -1;
}

int main()
{
  while(cin >> n, n) {
    REP(i, n)
      REP(k, 31){
        p_schedules[i][k] = false;
        dp[i][k] = 0;
      }
    REP(i, n) {
      int num_days;
      cin >> num_days;
      REP(k, num_days) {
        int day;
        cin >> day;
        p_schedules[i][day] = true;
      }
    }
    const long long goal = (1LL << n) - 1; // n bitの最大値
    // cout << goal << endl;
    int ans_day = -1;
    REP(i, n){
      dp[i][0] |= 1LL << i;
    }
    ans_day = solve(goal);
    if(ans_day != -1)
      cout << ans_day << endl;
    else
      cout << "-1" << endl;
  }
  return 0;
}
