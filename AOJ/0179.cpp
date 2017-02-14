#include <iostream>
#include <string>
#include <queue>
#include <set>

using namespace std;

#define REP(i, j) for(int i = 0; i < j; i++)

int solve(const string &start){
  const int N = start.length(); // 体幹の長さ
  const string r_goal = string(N, 'r');
  const string g_goal = string(N, 'g');
  const string b_goal = string(N, 'b');
  const int color_sum = 'r' + 'g' + 'b'; // 3色の合計
  deque< pair<int, string> > open; // <秒数, 状態>
  set<string> closed;

  open.push_back(make_pair(0, start));
  closed.insert(start);
  while(! open.empty()){
    const int cost = open.front().first;
    const string state = open.front().second;
    open.pop_front();

    if(state == r_goal || state == g_goal || state == b_goal) return cost;

    // 次の変化
    for(int i = 1; i < N; i++){
      if(state[i - 1] != state[i]){
        string nstate = state;
        char color = color_sum - state[i - 1] - state[i];
        nstate[i - 1] = color;
        nstate[i] = color;
        if(closed.find(nstate) == closed.end()){ // 新しい状態がないなら
          open.push_back(make_pair(cost + 1, nstate));
          closed.insert(nstate);
        }
      }
    }
  }
  return -1;
}

int main()
{
  string str;
  int ans;
  while(cin >> str, str != "0"){
    ans = solve(str);
    if(ans == -1)
      cout << "NA\n";
    else
      cout << ans << '\n';
  }
  return 0;
}
