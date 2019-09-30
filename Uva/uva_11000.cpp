#include <iostream>

using namespace std;

int main ()
{
long long int n, i, a, b, c, sumt, sum;
	while (cin >> n){
		if (n==-1)
		break;
		sumt = 0;
		sum = 0;
	a = 0;
	b = 1;
	for (i=1; i<= n; i++){
		c = a + b;
		sumt+=c;
		a = b;
		b = c;
		sum+=a;
	}
  
	cout << sum << " " << sumt+1 << endl;
	}
	
	return 0;
}
