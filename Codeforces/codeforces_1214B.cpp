#include <bits/stdc++.h>
using namespace std;
int main(){
	//freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
	int n, b, g, i, sum=0;
	cin>>b>>g>>n;
	if(n<b)b=n;
	if(n<g)g=n;
	if(b>=g){
		for(i=b; ;i--){
			sum++;
			if((n-i)==g)break;
		}
	}
	else{
		for(i=g; ;i--){
			sum++;
			if((n-i)==b)break;
		}
	}
	cout<<sum<<endl;
	return 0;
}
