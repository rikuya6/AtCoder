// WA 全然違う

#include <iostream>

using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++ )

int main()
{
  int n;
  while(cin >> n, n) {
    int days[n][31];
    REP(i, n){
      int day_num;
      cin >> day_num;
      REP(k, day_num)
        cin >> days[i][k];
    }
    int cnt = 0, save = -1;
    REP(i, 31) {
      REP(k, n) {
        if(days[k][0] == i) {
          cnt++;
        }
      }
      if(cnt == n) {
        save = i;
        break;
      }
    }
    cout << save << endl;
  }
}
