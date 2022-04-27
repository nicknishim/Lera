# include <iostream>
using namespace std;
int main () {
int D [10], x;
cout << "x = "; cin >> x;
for (int i = 0; i <= 10; i++) {if (i<=5) {D[i]=x-5+i; cout << "D (" << i << ") = " << D[i] << endl;} else {D[i]=x+5-i; cout << "D (" << i << ") = " << D[i] << endl;}}
return 0;}
