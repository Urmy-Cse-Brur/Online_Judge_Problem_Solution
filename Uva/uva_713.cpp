#include <bits/stdc++.h>

using namespace std;



int main()
{
	//freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
	
 int n, i, j, k, s, f;
	char a[100010], b[100010], c[10010], x[10010], y[100010];
	cin >> n;
	while (n--){
	cin >> x >> y;
	j = 0;
	for (i = strlen(x)-1; i>=0; i--){
		a[j] = x[i];
		j++;
	}
	a[j] = '\0';
	j = 0;
	for (i = strlen(y)-1; i>=0; i--){
		b[j] = y[i];
		j++;
	}
	b[j] = '\0';

	//cout << a << " " << b << endl;

	if (strlen(a) >= strlen(b)){
		j = strlen(b)-1;
		f = k = 0;
		for (i = strlen(a)-1; i >= 0; i--, j--){

			if (j < 0 && f == 0)
				b[j] = 48;
			else if (j < 0 && f == 1)
				b[j] = 49;
			if (f == 0){
				s = a[i]-48+ b[j]-48;
			}
			else{
				s = a[i]-48 + b[j]-48;
				if (j >= 0)
				s+=1;
			}
			if (s > 9){
				c[k] = (s%10) + 48;
				k++;
				f = 1;
			}
			else{
				c[k] = s+48;
				k++;
				f = 0;
			}
		}
		if (s > 9){
			c[k] = (s/10) + 48;
			k++;
		}

		c[k] = '\0';
	}
	else{
		j = strlen(a)-1;
		f = k = 0;
		for (i = strlen(b)-1; i >= 0; i--, j--){

			if (j < 0 && f == 0)
				a[j] = 48;
			else if (j < 0 && f == 1)
				a[j] = 49;
			if (f == 0){
				s = b[i]-48+ a[j]-48;
			}
			else{
				s = b[i]-48 + a[j]-48;
				if (j >= 0)
				s+=1;
			}
			if (s > 9){
				c[k] = (s%10) + 48;
				k++;
				f = 1;
			}
			else{
				c[k] = s+48;
				k++;
				f = 0;
			}
		}
		if (s > 9){
			c[k] = (s/10) + 48;
			k++;
		}

		c[k] = '\0';
	}

	for (i = 0; i < strlen(c); i++){
		if (c[0] == 48){
			while (c[i] == 48)
				i++;
		}
		cout << c[i];
	}
	cout << endl;
}
	return 0;
}


