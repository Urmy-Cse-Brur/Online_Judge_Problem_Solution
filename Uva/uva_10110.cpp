#include <iostream>
#include <math.h>

using namespace std;

int main ()
{
long long int n, i, a, b, c;
	while (cin >> n){
		if (n==0)
		break;
	c = sqrt(n);
	if (c*c == n)
		cout<<"yes"<<endl;
	else
		cout<<"no"<<endl;
	}
	return 0;
}
