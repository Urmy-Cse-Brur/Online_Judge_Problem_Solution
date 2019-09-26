#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, m, a[105], b[105], i;
	cin>>n;
	for(i=0;i<n;i++)cin>>a[i];
	cin>>m;
	for(i=0;i<m;i++)cin>>b[i];
	sort(a, a+n);
	sort(b, b+m);
	cout<<a[n-1]<<" "<<b[m-1]<<endl;
	return 0;
}
