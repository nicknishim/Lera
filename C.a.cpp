# include <iostream>
# include <cmath>
using namespace std;
int main ()
{
int D [9], x = pow (2, 9);
for (int i = 0; i <= 9; i++) {D[i]=x; cout << "D (" << i << ") = " << D[i] << endl; x=x/2;}
}
