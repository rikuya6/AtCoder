#include <iostream>

using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main()
{
  int n;
  cin >> n;
  int a[n + 1];
  REP(i, n) cin >> a[i + 1];
  int cnt = 0, pos = 1;
  while(true) {
    if(pos == 2) break;
    if(a[pos] == -1) {
      cnt = -1;
      break;
    }
    cnt++;
    int new_pos = a[pos];
    a[pos] = -1;
    pos = new_pos;
    // cout << pos << endl;
  }
  cout << cnt << endl;
}
