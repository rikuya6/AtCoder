#include <iostream>
#include <string>
#include <map>
#include <queue>
#include <algorithm>

using namespace std;
#define REP(i, j) for(int i = 0; i < j; i++)

int main()
{
  map< string, priority_queue<int, vector<int>, greater<int> >> index_map;
  string word;
  int page;
  while(cin >> word >> page){
    index_map[word].push(page);
  }
  for(auto it = index_map.begin(); it != index_map.end(); ++it){
    cout << it->first << endl;
    while(!it->second.empty()){
      int page = it->second.top();
      it->second.pop();
      if(!it->second.empty())
        cout << page << " ";
      else
        cout << page << endl;
    }
  }
  return 0;
}
