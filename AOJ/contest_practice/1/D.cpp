#include <iostream>

using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++ )

int main()
{
  int n;
  int a;
  int data[51][31];
  int m[51] = {0};
  while(cin >> n, n){
    REP(i, 51){
      REP(k, 31){
        data[i][k] = 0;
      }
    }

    REP(i, n){
      m[i] = -1;
      cin >> a;
      REP(k, a){
        cin >> data[i][a];
      }
    }

    REP(i, n){
      data[i][0];
    }
  }
}
