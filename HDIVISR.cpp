#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int res=1;
	for(int i=2;i<=10;i++)
	{
		if(n%i==0)     res=max(res,i);
	}
	cout<<res<<endl;
	return 0;
}