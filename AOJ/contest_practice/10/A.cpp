#include <iostream>
#include <algorithm>

using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main()
{
  int data[1001];
  int month[11];
  int n;
  int Y, M, D;

  int dai = 200;
  int show = 195;
  data[1000] = 0;
  data[999] = 0;
  for(int i = 998; i >= 0; i--){
    if((i+1) % 3 == 0) data[i] = data[i + 1] + dai;
    else data[i] = data[i + 1] + show;
    //cout << data[i] << " ";
  }
  //cout << endl;

  month[10] = 0;
  for(int i = 9; i >= 0; i--){
    month[i] = month[i + 1] + 19;
    if(i % 2 == 0) month[i]++;
    //cout << month[i] << " ";
  }
  //cout << endl;

  cin >> n;
  REP(i, n){
    int ans = 0;
    cin >> Y >> M >> D;
    ans += data[Y];
    if(Y % 3 != 0){
      ans += month[M];
      if(M % 2 != 0){
        ans += 20 - D;
      }else{
        ans += 19 - D;
      }
      ans++;
    }else{
      ans += 20 * (10 - M);
      ans += 20 - D;
      ans++;
      //cout << " aaaa" << endl;
    }
    //ans++;
    cout << ans << endl;
  }
}
