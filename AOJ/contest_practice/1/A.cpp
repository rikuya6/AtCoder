// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=2000

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++ )

void move_robot(pair<int, int>& robot_XY, const string& command)
{
  if(command == "N")
    robot_XY.second++;
  if(command == "S")
    robot_XY.second--;
  if(command == "E")
    robot_XY.first++;
  if(command == "W")
    robot_XY.first--;

  // cout << robot_XY.first << " " << robot_XY.second << endl;
}

bool check_jewel(pair<int, int>& robot_XY, vector<pair<int, int> >& jewel_XY)
{
  auto it = find(jewel_XY.begin(), jewel_XY.end(), robot_XY);
  if(it == jewel_XY.end()){
    return false;
  }
  auto index = distance(jewel_XY.begin(), it);
  jewel_XY.erase(jewel_XY.begin() + index);
  return true;
}

int main()
{
  int n;
  while(cin >> n, n) {
    vector<pair<int, int> > jewel_XY;
    REP(i, n) {
      int x, y;
      cin >> x >> y;
      jewel_XY.push_back(make_pair(x, y));
    }
    int m;
    vector<pair<string, int> > command_vec;
    cin >> m;
    REP(i, m) {
      string direction;
      int step;
      cin >> direction >> step;
      command_vec.push_back(make_pair(direction, step));
    }
    int count = 0;
    pair<int, int> robot_XY(10, 10);
    REP(i, m) {
      REP(k, command_vec[i].second){
        move_robot(robot_XY, command_vec[i].first);
        // cout << robot_XY.first << " " << robot_XY.second << endl;
        if(check_jewel(robot_XY, jewel_XY))
          count++;
      }
    }
    if(count == n)
      cout << "Yes\n";
    else
      cout << "No\n";
  }
  return 0;
}
