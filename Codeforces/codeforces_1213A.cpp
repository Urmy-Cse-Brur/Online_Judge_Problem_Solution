#include <iostream>
using namespace std;

int main (){
    int n, a[106], jor=0, bejor=0, i;
    cin>>n;
    for(i=0;i<n;i++){
    	cin>>a[i];
    	if(a[i]%2==0)jor++;
    	else bejor++;
    }
    if(jor<=bejor)cout<<jor<<endl;
    else cout<<bejor<<endl;
    return 0;
}
