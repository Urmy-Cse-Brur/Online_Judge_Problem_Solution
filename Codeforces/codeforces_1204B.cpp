#include <iostream>
#include <vector>
using namespace std;

int main()
{
	long long int n, i, l, r, mn=1, x=1, mx=1;
	cin>>n>>l>>r;
	for(i=1;i<l;i++) {
		x+=x;
		mn+=x;
	}
	mn+=(n-l);
	for(i=1, x=1;i<r;i++){
		x+=x;
		mx+=x;
	}
	mx+=((n-r)*x);
	cout<<mn<<" "<<mx<<endl;
	
	return 0;
}
