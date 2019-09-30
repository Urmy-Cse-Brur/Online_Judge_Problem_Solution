#include <bits/stdc++.h>

using namespace std;

int main()
{
	//freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);

	int n, i, j, a[1000], p, q;
	double ans;
	while (cin >> n){
	if (n==0)
	break;
	p = q = 0;
	for (i = 0; i < n; i++)
		cin >> a[i];

	for (i = 0; i < n; i++){
		for (j = i+1; j < n; j++){
			//cout << "(" << a[i] << ", " << a[j] << ")" << endl;
			q++;
			if ((__gcd(a[i], a[j])) == 1)
				p++;
		}
	}
	if (p == 0)
		cout <<"No estimate for this data set." << endl;
	else{
		ans = sqrt((6.0 * (double)q) / (double)p);
		cout << fixed << setprecision(6) << ans << endl;
	}
}
	return 0;
}
