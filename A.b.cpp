# include <iostream>
using namespace std;
int main () {
  int D [9], x;
  cout << "x ="; cin >> x;
  for (int i = 0; i <= 9; i++) {D[i]=x; cout << "D (" << i << ") = " << D[i] << endl; x++;}
  return 0;}
