// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=1148&lang=jp
// WA

#include <iostream>

using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main()
{
  int n, m;
  while(cin >> n >> m, n) {
    int student_login_num[m], flag[m][721], sum[m][721], time, pc_num, student_num, s;
    REP(i, m) {
      student_login_num[i] = 0;
      REP(k, 721) {
        flag[i][k] = 0;
        sum[i][k] = 0;
      }
    }
    int r;
    cin >> r;
    REP(i, r) {
      cin >> time >> pc_num >> student_num >> s;
      student_num--;
      time -= 540;
      if(s == 0) {
        int work = time;
        while(student_login_num[student_num] > 0) {
          flag[student_num][work] = 1;
          work--;
          flag[student_num][time] = 0;
          if(flag[student_num][work] == 1)
            student_login_num[student_num]--;
          // cout << student_login_num[student_num] << endl;
        }
      }else{
        flag[student_num][time] = 1;
        student_login_num[student_num]++;
      }
    }
    // REP(i, m){
    //   REP(k, 721) {
    //     cout << flag[i][k];
    //   }
    //   cout << endl;
    // }
    REP(i, m) {
      REP(k, 721) {
        if(k == 0) {
          sum[i][0] = 0;
          continue;
        }
        sum[i][k] += sum[i][k - 1] + flag[i][k];
        // cout << sum[i][k] << " ";
      }
      // cout << endl;
    }
    REP(i, 721) {
      cout << sum[0][i];
    }
    cout << endl;
    int q_num, q_t1, q_t2, q_student;
    cin >> q_num;
    REP(i, q_num) {
      cin >> q_t1 >> q_t2 >> q_student;
      q_student--;
      q_t1 -= 540;
      q_t2 -= 540;
      cout << q_t1 << ":" << q_t2 << endl;
      cout << sum[q_student][q_t2] - sum[q_student][q_t1 - 1] << endl;
    }
  }
  return 0;
}
