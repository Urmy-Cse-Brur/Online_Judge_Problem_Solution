#include <bits/stdc++.h>

using namespace std;

int main ()
{
   long long  int gcd, lcm, a, b, i, n, s, l, g, f, t;

    cin >> t;

    while (t--){
    cin >> gcd >> lcm ;
    f = 0;

    n = lcm / gcd;

    s  = sqrt (n);

    for (i = 1; i <= n; i++){
            if (n%i == 0){
                a = i * gcd;
                b = (n/i) * gcd;
                g = __gcd(a,b);
                l = (a*b) / gcd;
                if  ((g == gcd) && (l == lcm)){
                    f = 1;
                    break;
                }
            }
    }

    if (f==1)
        cout << a << " " << b << endl;
    else
        cout <<"-1" << endl;
    }
    return 0;
}
