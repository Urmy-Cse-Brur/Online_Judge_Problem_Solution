#include <bits/stdc++.h>

using namespace std;

int rev(long long int digit){
    int sum = 0, r;
    while (digit != 0){
        r = digit % 10;
        sum+=r;
        digit = digit / 10;
    }
  //  cout << sum << endl;
    return sum;
}

int a[100000];

void sieve (){
     int i, j, s, x = 0;
      int n = 50010;
     a[1] =  a[0] = 1;
     s = sqrt (n);
     for (i = 2; i <= s; i++){
        if (a[i] == 0){
            for (j = i * i; j <= n; j+=i)
                a[j] = 1;
        }

      }
//      for (i = 0; i < 100; i++){
//        if (a[i] == 0)
//            cout << i << endl;
//      }

}

int main ()
{
   // freopen ("in.txt", "r", stdin);
    sieve ();
    long long int n, s, x, sq, i, sums, urmy, t, temp;
    cin >> t;
    while (t--){
    cin >> n;
    n++;
    x = n;
    for (; ;){
    sums = 0;
    temp = n;
        sq = sqrt (n);
        for (i = 2; i <= sq; i++){
          if (a[i] == 0) {
            while (n%i == 0){
                 if (i > 9){
                    s = rev (i);
                 }
                 else{
                    s = i;
                 }
                 sums+=s;
                 n = n / i;
            }
          }
        }
    if (n != 1){
        if (n==temp){
        x++;
        n = x;
        continue;
        }
         if (n > 9){
                    s = rev (n);
                 }
                 else{
                    s = n;
                 }
                 sums+=s;
    }

    urmy = rev(x);
    if (urmy == sums){
        cout << x << endl;
        break;
    }

    else{
        x++;
        n = x;
        continue;
        }
    }
}
    return 0;
}
