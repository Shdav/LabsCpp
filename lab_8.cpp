#include <cmath>
#include <iostream>
#include <string>
using namespace std;

int main() {
  string s;
  char o = (char)32;
  int i = 0, d, w = 0, q, e = 1, t = 0;
  cout << "Vvidete predlozhenie dlya sozdaniya shifra" << endl;
  getline(cin, s);
  d = s.length();
  char *c = new char[d];
  for (i = 0; i < d; i++) {
    c[i] = s[i];
    if (c[i] != o) {
      e--;
    }
  }
  int z = d - abs(e);
  int *u = new int[z];
  for (i = 0; i <= z; i++) {
    u[i] = 0;
  }
  i = 0;
  t = 0;
  while (i < d) {
    c[i] = s[i];
    if (c[i] != o) {
      q = ((char)c[i] + 256) % 256;
      cout << q << " ";
      w += q;
    } else {
      u[t] = w % 256;
      w = 0;
      t++;
    }
    i++;
  }
  cout << endl;
  u[t] = w % 256;
  cout << "Elementi bloknota" << endl;
  for (i = 0; i < z; i++) {
    cout << u[i] << " ";
  }
  cout << endl;
  cout << "Vvedite soobchenie, kotoroe hotite zakodirovat'" << endl;
  getline(cin, s);
  d = s.length();
  for (i = 0; i < d; i++) {
    c[i] = s[i];
    c[i] = ((char(c[i]) + 256) % 256 + u[i % z]) % 256;
  }
  cout << "Zakodirovannoe soobchenie : ";
  for (i = 0; i < d; i++) {
    s[i] = c[i];
    cout << s[i];
  }
  cout << endl;
  cout << "Razkodirovannoe soobchenie : ";
  for (i = 0; i < d; i++) {
    c[i] = (char(c[i]) - u[i % z] + 256) % 256;
    s[i] = c[i];
    cout << s[i];
  }
  return 0;
}