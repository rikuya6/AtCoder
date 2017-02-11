#include<iostream>
#include<vector>
#include<cstdio>

using namespace std;
#define REP(i, j) for(int i = 0; i < j; i++)

int main()
{
  int n;
  while(cin >> n && n){
    int table[n + 1][n + 1];
    REP(i, n + 1)
      REP(k, n + 1)
        table[i][k] = 0;
    REP(i, n){
      int value;
      REP(k, n){
        cin >> value;
        table[i][k] = value;
        table[i][n] += value;
        table[n][k] += value;
        table[n][n] += value;
      }
    }
    REP(i, n + 1){
      REP(k, n + 1) {
        printf("%5d", table[i][k]);
      }
      cout << "\n";
    }
  }
  return 0;
}
