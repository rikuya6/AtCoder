#include <iostream>
#include <string>

using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)
#define INF 1 << 29

int main()
{
    int n, m;
    int a[50], b[50], c[50], d[50];
    cin >> n >> m;
    REP(i, n)
      cin >> a[i] >> b[i];
    REP(i, m)
      cin >> c[i] >> d[i];
    REP(i, n) {
      int min_cost = INF;
      int idx = -1;
      REP(k, m) {
        int dest = abs(a[i] - c[k]) + abs(b[i] - d[k]);
        if(min_cost > dest) {
          min_cost = dest;
          idx = k;
        }
      }
      cout << idx + 1 << endl;
    }
}
