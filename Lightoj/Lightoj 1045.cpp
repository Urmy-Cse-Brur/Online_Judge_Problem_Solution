#include <bits/stdc++.h>
#include <math.h>

using namespace std;

#define ll long long int

int main(){
    //freopen ("in.txt", "r", stdin);
    //freopen ("out.txt", "w", stdout);

    int n, i, a, b, c = 0;
    cin >> n;
    while (n--){
        cin >> a >> b;
        double sum = 0;
        if (a == 0 || a == 1) cout << "Case " << ++c << ": " << "1" << endl;
        else {
             sum = ((a * ((log(a / M_E))/(log(b))) +  ((log(2 * M_PI * a)) / (log(b))) / 2.0)); 
             cout << "Case " << ++c << ": " << fixed << setprecision(0) << floor(sum)+1 << endl;
        }
    }
    return 0;
}
