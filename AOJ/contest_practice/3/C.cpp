#include <iostream>
#include <string>
#include <vector>
#include <cctype>
using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main()
{
  int n;
  string data;
  int length;

  cin >> n;
  
  REP(i, n){
    string aaa;
    int ans = 0;
    int work = 1;
    REP(m, 2){
      int sum = 0;
      cin >> data;
      length = data.size();

      REP(k, length){
        if(isdigit(data[k])) {
         work = data[k] - '0';
          //cout << "aaa:" << data[k] - '0' << endl;
        }else if(data[k] == 'm'){
          sum += work * 1000;
          work = 1;
       }else if(data[k] == 'c'){
          sum += work * 100;
          work = 1;
       }else if(data[k] == 'x'){
          sum += work * 10;
          work = 1;
        }else if(data[k] == 'i'){
         sum += work;
         work = 1;
        }
      }
      ans += sum;
    }
    //cout << ans << endl;

    
    work = ans / 1000;
    if(work){
      if(work != 1){
        aaa += to_string(work) + 'm';
      }else{
        aaa += 'm';
      }
      ans %= 1000;
    }
    work = ans / 100;
    if(work){
      if(work != 1){
        aaa += to_string(work) + 'c';
      }else{
        aaa += 'c';
      }
      ans %= 100;
    }
    work = ans / 10;
    if(work){
      if(work != 1){
        aaa += to_string(work) + 'x';
      }else{
        aaa += 'x';
      }
      ans %= 10;
    }
    work = ans;
    if(work){
      if(work != 1){
        aaa += to_string(work) + 'i';
      }else{
        aaa += 'i';
      }
    }
    
    cout << aaa << endl;
  }
}
