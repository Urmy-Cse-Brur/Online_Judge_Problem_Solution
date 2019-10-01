#include <bits/stdc++.h>

using namespace std;

#define ull unsigned long long
#define ll long long int
#define pb push_back
#define fio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main(){
    #ifndef ONLINE_JUDGE
    freopen ("in.txt", "r", stdin);
    freopen ("out.txt", "w", stdout);
    #endif
   // fio();
    ll n, x, c, i, sum, cnt = 0;
    scanf("%lld", &n);
    while (n--){
        c = 0; sum = 1;
        scanf("%lld", &x);
        while (x%2 == 0){
            x/=2;
            c++;
        }
        sum*=(c+1);
        for (i = 3; i <= sqrt(x); i+=2){
            c = 0;
            while (x%i == 0){
                x/=i;
                c++;
            }
            if (c!=0) sum*=(c+1);
        }
        if (x > 1) sum*=2;
        printf("Case %lld: %lld\n", ++cnt, sum-1);
    }
    return 0;
}
