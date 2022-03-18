# include <iostream>
using namespace std;
int main ()
{
int a, b, c, M;
cout << "a = "; cin >> a;
cout << "b = "; cin >> b;
cout << "c = "; cin >> c;
// обязательная проверка чего там навводил пользователь
if ((a == b) || (b == c) || (a = c)) {cout << "Error, there is no largest number";}; return 0;
if ((a > b) && (a > c)) {M = a;}
  else if ((b > c) && (b > a)) {M = b;}
    else M = c;
cout << M;
}
