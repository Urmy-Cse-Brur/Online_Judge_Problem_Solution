#include <iostream>

using namespace std;

int main ()
{
long long int n, i, a, b, c;
	while (cin >> n){
		if (n==0)
		break;
	a = 0;
	b = 1;
	for (i=1; i<= n; i++){
		c = a + b;
		a = b;
		b = c;
	}
	cout << c << endl;
	}
	
	return 0;
}
