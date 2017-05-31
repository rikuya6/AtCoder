#include <iostream>

using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int n, m;
int t[1000001], p[101], x[101];

int sum(int num)
{
  int sum = 0;
  for(int i = 1; i <= n; i++) {
    if(i == p[num]){
      sum += x[num];
      // cout << p[num] << " " << x[p[num]] << endl;
    }else{
      sum += t[i];
    }
    //cout << "x" << sum << endl;
  }
  return sum;
}

int main()
{
  cin >> n;
  for(int i = 1; i <= n; i++) cin >> t[i];
  cin >> m;
  for(int i = 1; i <= m; i++) cin >> p[i] >> x[i];
  for(int i = 1; i <= m; i++) cout << sum(i) << endl;
}
