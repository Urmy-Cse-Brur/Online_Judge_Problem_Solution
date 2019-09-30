#include <bits/stdc++.h>
#include <algorithm>
#include <iterator>
#include <vector>

using namespace std;

int main ()
{
    //freopen ("in.txt", "r", stdin);
    int digit, sum, t, i, j, d, po, r, s;
    char ch, ch1;
    cin >> t;
    while (t--){
        j = 26 * 26;
        sum = 0;
        for (i = 2; i >= 0; i--){
            cin >> ch;
            r = ch - 65;
            //cout << s << endl;
            po = r * j;
           // cout << po << endl;
            sum+=po;
            j/=26;
        }
        cin >> ch1;
        cin >> digit;
        d = abs (sum - digit);

     //  cout << sum << endl << digit << endl;

        if (d <= 100)
            cout << "nice" << endl;
        else
             cout << "not nice" << endl;
    }
    return 0;
}
