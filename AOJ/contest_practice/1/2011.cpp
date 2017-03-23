#include <iostream>
#include <algorithm>

using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++ )

int main()
{
  int n;
  while(cin >> n, n) {
    int p_days[n][30];
    REP(i, n) {
      int num_days;
      cin >> num_days;
      REP(k, num_days)
        cin >> p_days[n][k];
    }
  }
}
