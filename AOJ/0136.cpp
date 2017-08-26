#include <iostream>
#include <algorithm>
using namespace std;
#define REP(i, j) for (int i = 0; i < j; i++)

int main()
{
  int n;
  cin >> n;
  double range[] = {0, 165.0, 170.0, 175.0, 180.0, 185.0, 200.0}, data[n];
  REP(i, n) {
    cin >> data[i];
  }
  sort(data, data + n);
  int count[6]; fill(count, count + 6, 0);
  for(int i = 0, pos = 0; i < n; i++) {
    if (data[i] >= range[pos] && data[i] < range[pos + 1]) {
      count[pos]++;
      // cout << "d" << data[i] << endl;
    }else{
      pos++;
      i--;
    }
  }
  REP(i, 6) {
    cout << i + 1 << ":";
    REP(k, count[i]) cout << "*";
    cout << endl;
  }
  return 0;
}
