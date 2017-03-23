#include <iostream>
using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++ )

int main()
{
  int N, M;
  while(cin >> N >> M, N && M){
    int h[1502];
    int w[1502];
    int cnt = 0;
    int height = 0;
    int width = 0;
    REP(i, N)
      cin >> h[i];
    REP(i, M)
      cin >> w[i];
    width = 0;
    REP(i, M){
      for(int b = i; b < M; b++){
        width = 0;
        for(int k = i; k <= b; k++){
          width += w[k];
        }
        REP(k, N){
          height = 0;
          for(int u = k; u < N; u++){
            height += h[u];
            //cout << "w[" << i << "]:" << w[i] << ", width:" << width << " height:" << height << endl;
            if(width == height){
              cnt++;
              //cout << " c2" << endl;
              break;
            }
          }
        }
      }
    }
    cout << cnt << endl;
  }
  return 0;
}
