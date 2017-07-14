#include <iostream>
#include <map>
#include <algorithm>

using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main()
{
  int n;
  while(cin >> n, n) {
    string c;
    map<string, int> score;
    int first = 0, second = 0;
    REP(i, n) {
      cin >> c;
      auto search = score.find(c);
      if(search != score.end()) {
        // cout << "find" << endl;
        score[c]++;
      }else{
        // cout << "not find" << endl;
        score[c] = 1;
      }
      if(score[c] > first) first = score[c];
      else if(score[c] > second) second = score[c];
      if(score[c] + n - i > first) continue;
      else {
        cout << c << " " << i + 1 << endl;
        break;
      }
    }
    if(first == second) cout << "TIE" << endl;
    else cout << "まって" << endl;
  }
}
