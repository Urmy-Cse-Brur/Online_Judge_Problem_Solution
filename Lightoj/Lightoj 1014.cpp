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
        fio();
        ll n, p, l, r, s, cnt = 0, x, i;
        cin >> n;
        while (n--){
            vector <int> v;
            cin >> p >> l;
            r = p - l;
            x = r;
            s = sqrt(r);
            for (i = 1; i <= s; i++){
                 if (r%i == 0 ){
                 if (i <= l){
                    if (r/i > l)
                         v.push_back(r/i);
                     else
                        break;
                    }
                    else{
     
                        v.push_back(i);
                        if (i != r/i && r/i > l)
                        v.push_back(r/i);
                    }
                }
            }
            if (v.size() == 0){
                    printf("Case %lld: impossible\n", ++cnt);
            }
            else{
                sort(v.begin(), v.end());
                    printf("Case %lld:", ++cnt);
                for (i = 0; i < v.size(); i++){
                    printf(" %lld", v[i]);
                }
                    printf("\n");
            }
     
        }
        return 0;
    }
