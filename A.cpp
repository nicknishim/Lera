#include <iostream>
using namespace std;

int main () {
    int N, d0, d1, d2, s=0;
    // необязательное пояснение, что требуется именно трехзначное число
    cout << "Please type the number at range from 100 to 999 - "; cin >> N;
    // обязательная проверка чего там навводил пользователь, подходит ли под условия
    if ((N>999) || (N<100)) {cout << "N out of range\n"; return 0;}
    d0 = N / 100;
    d1 = N /10 % 10;
    d2 = N % 10;
    s = d0 + d1 +d2;
    cout << "summ = " << s << endl;
    return 0;}
