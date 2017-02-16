// TLEする

#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <queue>
#include <algorithm>

using namespace std;
#define REP(i, j) for(int i = 0; i < j; i++)

int solve(const string &start)
{
  string goal = "01234567";
  deque<string> open; // 状態
  deque<int> count_que;
  set<string> closed;

  open.push_back(start);
  closed.insert(start);
  count_que.push_back(0);
  while(! open.empty()){
    const string state = open.front();
    const int count = count_que.front();
    open.pop_front(); count_que.pop_front();

    if(state == goal) return count;

    // 次の変化
    vector< vector<int> > next_pos{ {1, 4}, {-1, 1, 4}, {-1, 1, 4}, {-1, 4}, {-4, 1}, {-1, 1, -4}, {-1, 1, -4}, {-1, -4} };
    string nstate;
    int zero_pos = state.find("0");
    // cout << "index:"<< index << endl;
    // REP(k, 8){
    //   cout << state[k];
    // }
    // cout << endl;
    REP(i, 8) {
      if(zero_pos == i){
        for(auto it = next_pos[i].begin(); it != next_pos[i].end(); ++it){
          nstate = state;
          swap(nstate[zero_pos], nstate[zero_pos + *it]);
          // REP(k, 8){
          //   cout << state[k];
          // }
          // cout << endl;
          // REP(k, 8){
          //   cout << nstate[k];
          // }
          // cout << endl;
          if(closed.find(nstate) == closed.end()){
            open.push_back(nstate);
            count_que.push_back(count + 1);
            closed.insert(nstate);
          }
        } // for
        break;
      } // if
    } // REP
  } // while
  return -1;
}

int main()
{
  int num, ans;
  while(true){
    string start;
    REP(i, 8){
      if(! (cin >> num))
        return 0;
      start += to_string(num);
    }
    ans = solve(start);
    cout << ans << endl;
  }
  return 0;
}
