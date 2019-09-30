#include <bits/stdc++.h>
#include <algorithm>
#include <iterator>
#include <vector>

using namespace std;

int main ()
{
   // freopen ("in.txt", "r", stdin);

    unsigned long long a, b, c, fact, n, i, f  = 0;
    char ch;
   while (cin >> n){
    if (f != 0)
        cout << endl;
    f++;
    a = 1;
    for (i = 1; i <= 2*n; i++)
        a*=i;

    b = 1;
    for (i = 1; i <= (n+1); i++)
        b*=i;

    c = 1;
    for (i = 1; i <= n; i++)
        c*=i;

    fact = a / (b * c);
    cout << fact << endl;

   }
    return 0;
}
