#include <bits/stdc++.h>
#include <algorithm>
#include <iterator>
#include <vector>

using namespace std;

int main ()
{
   // freopen ("in.txt", "r", stdin);
   int i, n, r, l, m, p;
   char s[10000];


   while (cin >> s){
        if (s[0] == '-')
           break;
   vector <char> v;
   l = pow(16, 4);
   if (s[1] == 'x'){
        n = 0;
        l = strlen(s) - 3;
        for (i = 2; i < strlen (s); i++){
            if (s[i] == 'A')
                r = 10;
            else if (s[i] == 'B')
                r = 11;
             else if (s[i] == 'C')
                r = 12;
             else if (s[i] == 'D')
                r = 13;
             else if (s[i] == 'E')
                r = 14;
             else if (s[i] == 'F')
                r = 15;
            else
                r = s[i] - 48;

            p = r * pow(16, l);
            n+= p;
            l--;
        }
        cout << n;
   }
   else{
   n = atoi (s);
  // cout << n << endl;
   while (n != 0){
     r = n % 16;
     if (r > 9){
        if (r == 10)
            v.push_back('A');
        else if (r == 11)
            v.push_back('B');
        else if (r == 12)
            v.push_back('C');
        else if (r == 13)
            v.push_back('D');
        else if (r == 14)
            v.push_back('E');
        else if (r == 15)
            v.push_back('F');
     }
     else{
        r = r + 48;
        v.push_back(r);
     }
     n = n / 16;
   }
    cout << "0x";
   for (i = v.size()-1; i >= 0; i--)
    cout << v[i];
   }
   cout << endl;
   }
    return 0;
}
