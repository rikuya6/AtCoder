#include<iostream>

using namespace std;
#define REP(i, j) for(int i = 0; i < j; i++)

void hit(int &score, int &base)
{
  base++;
  if(base >= 4){
    score++;
    base--;
  }
  return;
}

bool game(string event, int &score, int &base, int &out)
{
  if(event == "HIT"){
    hit(score, base);
  }else if(event == "HOMERUN"){
    REP(i, 4)
      hit(score, base);
    base = 0;
  }else{
    out++;
    if(out == 3) return false;
  }
  return true;
}

int main()
{
  int n;
  cin >> n;
  while(n--){
    int score = 0, base = 0, out = 0;
    string event;
    while(true){
      cin >> event;
      // cout << score << " " << base << " " << out << endl;
      if(!game(event, score, base, out)) {
        break;
      }
    }
    cout << score << endl;
  }
}
