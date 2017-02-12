#include <iostream>
#include <string>
#include <stack>
#include <cctype>
#include <cmath>

using namespace std;

#define REP(i, j) for(int i = 0; i < j; i++)

string re_poland(string);
int calc(string);

int main()
{
  int n, ans;
  string expression, re_poland_ex;
  stack<string> st;
  cin >> n;

  REP(i, n){
    cin >> expression;
    expression.pop_back(); // "=" を削除
    re_poland_ex = re_poland(expression);
    // cout << re_poland_ex << endl;
    ans = calc(re_poland_ex);
    cout << ans << '\n';
  }
  return 0;
}

string re_poland(string expression)
{
  string re_poland_ex;
  stack<string> st;
  string target, period;
  char digit_ch, digit_ch_after;
  int size = expression.size();
  REP(i, size){
    target = expression[i];
    digit_ch = expression[i];
    if(isdigit(digit_ch)){
      period = expression[i + 1];
      if(period == "."){
        i += 2;
        for(int k = i; k < size; k++, i++){
          digit_ch_after = expression[k];
          if(isdigit(digit_ch_after))
            continue;
          else
            break;
        }
      }
      re_poland_ex += digit_ch;
    }else if(target == "("){
      st.push(target);
    }else if(target == ")"){
      while(true){
        if(st.top() == "("){
          st.pop();
          break;
        }else{
          re_poland_ex += st.top();
          st.pop();
        }
      }
    }else{
      // 演算子
      string ope;
      if(st.size() >= 1){
        ope = st.top();
        if(ope == "*" || ope == "/"){
          re_poland_ex += ope;
          st.pop();
        }
      }
      st.push(target);
    }
  }
  while(!st.empty()){
    re_poland_ex += st.top();
    st.pop();
  }
  return re_poland_ex;
}

int calc(string re_poland_ex)
{
  stack<int> st;
  string target;
  char digit_ch; // 数値判定用
  int size = re_poland_ex.size();
  int ope_a, ope_b;
  REP(i, size){
    target = re_poland_ex[i];
    digit_ch = re_poland_ex[i];
    if(isdigit(digit_ch)){
      st.push(stoi(target));
    }else if(target == "+"){
      ope_a = st.top(); st.pop();
      ope_b = st.top(); st.pop();
      st.push(ope_b + ope_a);
    }else if(target == "-"){
      ope_a = st.top(); st.pop();
      ope_b = st.top(); st.pop();
      st.push(ope_b - ope_a);
    }else if(target == "*"){
      ope_a = st.top(); st.pop();
      ope_b = st.top(); st.pop();
      st.push(ope_b * ope_a);
    }else{
      ope_a = st.top(); st.pop();
      ope_b = st.top(); st.pop();
      st.push((int)(floor(ope_b / ope_a)));
      // cout << "debug:" << ope_b <<  " " << ope_a << endl;
      // cout << "debug:" << (int)(floor(ope_b / ope_a)) << endl;
    }
  }
  return st.top();
}
