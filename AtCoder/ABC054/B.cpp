#include <iostream>
#include <string>

using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

char a[51][51], b[51][51];
int n, m;

bool check_char(int xpos, int ypos)
{
  REP(i, m)
    REP(k, m)
      if(a[i + xpos][k + ypos] != b[i][k]) return false;
  return true;
}

int main()
{
  cin >> n >> m;
  REP(i, n)
    REP(k, n)
      cin >> a[i][k];
  REP(i, m)
    REP(k, m)
      cin >> b[i][k];
  bool flg = false;
  REP(i, n) {
    REP(k, n) {
      if(a[i][0] == b[0][0] && check_char(i, k)){
        flg = true;
        break;
      }
      if(flg) break;
    }
  }
  if(flg)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}
