# include <iostream>
using namespace std;

int main () {
    int D [9], x;
    cout << "x = "; cin >> x;
    for (int i = 0; i <= 9; i++) {D[i]=x+(9-i); cout << "D (" << i << ") = " << D[i] << endl;}
    return 0;}
