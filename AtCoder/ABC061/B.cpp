#include <iostream>
#include <string>

using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++ )

int main()
{
  int n, m;
  cin >> n >> m;
  int town[n + 1];
  REP(i, n + 1)
    town[i] = 0;
  REP(i, m) {
    int a, b;
    cin >> a >> b;
    town[a]++;
    town[b]++;
  }
  for(int i = 1; i <= n; i++)
    cout << town[i] << endl;
}
