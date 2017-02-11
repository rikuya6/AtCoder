#include<iostream>
#include<string>
#include<map>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
  int n;
  while(cin >> n && n){
    vector<string>number;
    map<string, long long>emp;
    for(int i = 0; i < n; i++){
      string num;
      int amount, p, q;
      cin >> num >> p >> q;
      auto it = find(number.begin(), number.end(), num);
      if(it != number.end()) {
        emp[num] += p * q;
      }else{
        number.push_back(num);
        emp[num] = p * q;
      }
    }
    bool flag = false;
    for(auto it : number){
      if(1000000 <= emp[it]){
        flag = true;
        cout << it << endl;
      }
    }
    if(!flag)
      cout << "NA\n";
  }
  return 0;
}
