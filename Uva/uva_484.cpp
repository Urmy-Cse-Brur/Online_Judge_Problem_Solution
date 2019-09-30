#include <bits/stdc++.h>
#include <vector>
#include <iterator>

using namespace std;


int main()
{
  // freopen ("in.txt", "r", stdin);
   int n, i = 0, c;
 vector <int> v;
  map <int, int> mp;

   while (cin >> n) {
    if (mp[n] == 0){
     v.push_back(n);
     mp[n] = 1;
     }
     else
        mp[n]++;

    if (getchar() == '\n')
        break;

   }


   for (i = 0; i < v.size(); i++){
       cout << v[i] << " " << mp[v[i]] << endl;
   }

    return 0;
}
