#include "matrix.h"
using namespace std;
int main()
{
    matrix A = matrix(3, 3);
    cin >> A;
    matrix b = matrix(3, 1);
    cin >> b;
   matrix x=b;
    x.Show();return 0;
}
