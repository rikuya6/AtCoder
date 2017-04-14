#include <iostream>
#include <algorithm>

using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int simple(int capital, const double rate, const int fee, const int operating_years)
{
  int interest = 0;
  REP(i, operating_years) {
    interest += capital * rate;
    capital -= fee;
  }
  return capital + interest;
}

int compound(int capital, const double rate, const int fee, const int operating_years)
{
  REP(i, operating_years) {
    capital += capital * rate;
    capital -= fee;
  }
  return capital;
}

int calc(const int kind, int capital, const double rate, const int fee, const int operating_years)
{
  if(kind == 0) return simple(capital, rate, fee, operating_years);
  else return compound(capital, rate, fee, operating_years);
}

int main()
{
  int m;
  cin >> m;
  REP(i, m) {
    int capital, operating_years, kind, kind_num, fee;
    double rate;
    cin >> capital >> operating_years >> kind_num;
    int max_capital = -1;
    REP(k, kind_num) {
      cin >> kind >> rate >> fee;
      max_capital = max(max_capital, calc(kind, capital, rate, fee, operating_years));
    }
    cout << max_capital << endl;
  }
  return 0;
}