// 解けてない

#include <iostream>
#include <algorithm>
#include <cstdio>

using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++ )

int main()
{
  int n, cnt = 0;
  cin >> n;
  int a[n];
  REP(i, n)
    cin >> a[i];
  REP(i, n){
    bool flag[n];
    flag[i] = true;
    int pos = i;
    while(! flag[pos]){
      if(i == pos) cnt++;
      flag[pos] = true;
      pos = (pos + pos) % n;
    }
  }
  cout << cnt << endl;
  return 0;
}
