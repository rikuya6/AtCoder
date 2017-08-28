#include <iostream>
#include <algorithm>
using namespace std;
#define REP(i, j) for (int i = 0; i < j; i++)

int main()
{
  int n;
  while (cin >> n, n) {
    int o_cnt = 32;
    int a[n], pos = 0;
    REP(i, n) cin >> a[i];
    while (o_cnt > 0) {
       o_cnt -= (o_cnt - 1) % 5;
       cout << o_cnt << endl;
       if (o_cnt <= a[pos % n]) o_cnt = 0;
       else o_cnt -= a[pos % n];
       pos++;
       cout << o_cnt << endl;
    }
  }
  return 0;
}
