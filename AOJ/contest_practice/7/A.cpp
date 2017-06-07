#include <iostream>

using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main()
{
  int n;
  int a, b;
  int w, h;
  while(cin >> n, n){
    w = 0; h = 0;
    REP(i, n - 1){
      cin >> a >> b;
      if(b == 0 || b == 3){
        h++;
      }else{
        w++;
      }
    }
    cout << w << " " << h << endl;
  }
}
