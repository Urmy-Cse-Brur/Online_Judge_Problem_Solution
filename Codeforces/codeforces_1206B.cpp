#include <bits/stdc++.h>
#include <stdlib.h>
#include <vector>
using namespace std;
int main()
{
	int n, i, c=0;
	cin>>n;
	int a[n+1];
	long long ans=0, x=0;
	vector <int> v, neg;
	for(i=0;i<n;i++){
		cin>>a[i];
		if(a[i]<0){
			if (a[i]<-1)ans+=(abs(a[i])-1);
			c++;
			neg.push_back(a[i]);
		}
		else v.push_back(a[i]);
	}
	if(c%2==0){
		for(i=0;i<v.size();i++){
			if(v[i]!=1){
				if (v[i]==0) ans++;
				else ans+=(v[i]-1);
			}
		}
	}
	else{
		if (v.size()==0) ans+=2;
		else{
			sort(neg.begin(), neg.end());
			x=ans;
			x+=2;
			for(i=0;i<v.size();i++) {
				if(v[i]!=1){
					if (v[i]==0) x++;
					else x+=(v[i]-1);
				}
			}
			sort(v.begin(), v.end());
			ans+=(v[0]+1);
			for(i=1;i<v.size();i++){
				if(v[i]!=1){
					if (v[i]==0) ans++;
					else ans+=(v[i]-1);
				}
			}
			ans=min(ans, x);
			}
	}
	cout<<ans<<endl;
	return 0;
}
