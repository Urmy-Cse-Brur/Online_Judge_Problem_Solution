#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int i, j, n, m, c=0, f=0;
	int s[100][100], b[100][100];
	vector <int> v, x;
	cin>>n>>m;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++)cin>>s[i][j];
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++)b[i][j]=0;
	}
	for(i=0;i<n-1;i++){
		for(j=0;j<m-1;j++){
			if(s[i][j]==1 && s[i+1][j]==1 &&
			   s[i][j+1]==1 && s[i+1][j+1]==1){
			   b[i][j]=1;b[i+1][j]=1;
			   b[i][j+1]=1;b[i+1][j+1]=1;
			   c++;
			   v.push_back(i+1);
			   x.push_back(j+1);
			 }
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(s[i][j]!=b[i][j]){
				f=1;break;
			}
		}
	}
	if(f){
		cout<<"-1"<<endl;
		return 0;
	}
	cout<<c<<endl;
	for(i=0;i<c;i++)cout<<v[i]<<" "<<x[i]<<endl;
}
