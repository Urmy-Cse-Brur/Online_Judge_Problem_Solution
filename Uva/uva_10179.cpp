
#include <bits/stdc++.h>
#include <algorithm>
#include <iterator>
#include <vector>

using namespace std;


int euler (long long int n){
    long long int i, sq, ans;
    set <long long int> s;
    set <long long int> :: iterator it;
    ans = n;

 //   if (n == 1)
         //   ans = 0;

    if (n%2 == 0){
        while (n%2 == 0){
            s.insert(2);
            n = n / 2;
        }
    }
        sq = sqrt (n);
        for (i = 3; i <= sq; i++){
            while (n%i == 0){
                 s.insert(i);
                 n = n / i;
            }
        }


    if (n != 1)
         s.insert(n);

        for (it = s.begin(); it != s.end(); it++){
            ans-=(ans / *it);
       }

       return ans;
}
int main ()
{
   // freopen ("in.txt", "r", stdin);

    long long int m, i, result;

    while ( cin >> m){
        if (m == 0) break;
        result = euler (m);
        cout << result << endl;
    }
    return 0;
}
