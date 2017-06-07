#include <iostream>
#include <vector>

using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int maze[31][31];

int main()
{
  int d[100];
  vector<int> od;
  REP(i, 100) {
    d[i] = i * (i + 1) * (i + 2) / 6;
    if(!(d[i] == 0))
      od.push_back(d[i]);
    if(d[i] > 106) break;
  }
  int n;
  while(cin >> n, n) {

  }
}
