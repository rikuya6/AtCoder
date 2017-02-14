#include <iostream>
#include <string>

using namespace std;

#define REP(i, j) for(int i = 0; i < j; i++)

typedef pair<int,const char*> parsed;

parsed expr(const char *);
parsed term(const char *);
parsed fact(const char *);

int main()
{
  int n;
  string expression;
  cin >> n;

  REP(i, n){
    cin >> expression;
    expression.pop_back(); // "=" を削除
    int ans = expr(expression.c_str()).first;
    cout << ans << '\n';
  }
  return 0;
}

parsed expr(const char *p)
{
  parsed r = term(p); // 最初のtermの返り値
  // *r.secondは次の文字。次の文字に+又は-が続く間
  while(*r.second == '+' || *r.second == '-'){
    char op = *r.second;
    int tmp = r.first; // tmpに +, -の左側の結果が格納
    r = term(r.second + 1); // +, -の右側のtermの返り値
    if(op == '+')
      r.first = tmp + r.first; // +の場合は加算
    else
      r.first = tmp - r.first; // -の場合は減算
  }
  return r;
}

parsed term(const char *p)
{
  parsed r = fact(p);
  while(*r.second == '*' || *r.second == '/'){
    char op = *r.second;
    int tmp = r.first;
    r = fact(r.second + 1);
    if(op == '*')
      r.first = tmp * r.first;
    else
      r.first = tmp / r.first;
  }
  return r;
}

parsed fact(const char *p)
{
  if(isdigit(*p)){ // 数字列
    int t = *(p++) - '0';
    while(isdigit(*p)) // 数字列が終わるまで
      t = t * 10 + *(p++) - '0';
    return parsed(t, p);
  }else if(*p == '('){ // 開き括弧の場合
    parsed r = expr(p + 1);
    if(*r.second != ')')
      exit(0); // invalid input
    return parsed(r.first, r.second + 1);
  }else{
    exit(0); // invalid input
  }
}
