#include <iostream>
using namespace std;

int main() {

  int h1, m1, s1, h2, m2, s2;
  cin >> h1 >> m1 >> s1; // 1 0 0
  cin >> h2 >> m2 >> s2; // 2 0 0
  int t1 = h1 * 60 * 60 + m1 * 60 + s1;
  int t2 = h2 * 60 * 60 + m2 * 60 + s2;
  int dh, dm, ds;

  t2 += 86400; //*(t2<t1);

  ds = t2 - t1;
  dh = ds / (60 * 60);
  ds -= dh * 60 * 60;
  dm = ds / 60;
  ds -= dm * 60;
  cout << dh << ':' << dm << ':' << ds;
}
