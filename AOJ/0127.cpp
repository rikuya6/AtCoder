#include <iostream>
#include <string>

using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++ )

int main()
{
  const string convert_table[] = {
                                  "",
                                  " afkpuz",
                                  " bglqv.",
                                  " chmrw?",
                                  " dinsx!",
                                  " ejoty "};
  string text;
  while(cin >> text) {
    if(text.size() % 2 != 0){
      cout << "NA\n";
      continue;
    }
    int first_pos, second_pos;
    string ans_text = "";
    bool flag = true;
    for(int i = 0; i < text.size() / 2; i++) {
      first_pos = text[i * 2] - 48;
      second_pos = text[i * 2 + 1] - 48;
      // cout << first_pos << " " << second_pos << endl;
      if(first_pos >= 1 && first_pos <= 6 && second_pos >= 1 && second_pos <= 5)
        ans_text += convert_table[second_pos][first_pos];
      else{
        flag = false;
        cout << "NA\n";
        break;
      }
    }
    if(flag)
      cout << ans_text << endl;
  }
  return 0;
}
