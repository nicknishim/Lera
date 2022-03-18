# include <iostream>
using namespace std;
int main ()
{
int N, d0, d1, d2, s;
// необязательное пояснение, что требуется именно трехзначное число
cout << "Please type the number at range from 100 to 1000 or range -1000 to -99 -- "; cin >> N;
//переводим число в натуральное положительное если оно было отрицательным
N = abs(N);
// необязательная проверка, какое именно число ввели, подходит ли под условия
if ((N>999) || (N<100)) {cout << "N out of range"; return 0;}
d0 = N / 100;
d1 = N /10 % 10;
d2 = N % 10;
s = d0 + d1 +d2;
cout << "summ = " << s;
}
