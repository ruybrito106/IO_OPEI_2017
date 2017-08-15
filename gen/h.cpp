#include <bits/stdc++.h>

using namespace std;

int main() {
  string str = "", aux;
  int a;
  for(int i = 0; i < 500000; i++) {
    a = rand()%26;
    str.push_back('A' + a);
  }
  aux = str;
  reverse(aux.begin(), aux.end());
  aux[0] = 'B';
  str.append(aux);
  cout << str << endl;
  return 0;
}
