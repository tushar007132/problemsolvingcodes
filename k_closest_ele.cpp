#include<bits/stdc++.h>
using namespace std;
vector<int> k_closest_ele(int arr[],int x,int k,int n)
{
	vector<int> v;
	priority_queue<pair<int,int>> maxh;
	for(int i=0;i<n;i++){
		maxh.push({abs(arr[i]-x),arr[i]});

		if(maxh.size()>k)      maxh.pop();
	}

	while(maxh.size()>0){
		v.push_back(maxh.top().second);
		maxh.pop();
	}
	return v;
}

int main(){
	// k closest number
	int arr[]={10,2,14,7,6},x=5,k=3,n=5;
	vector<int> res=k_closest_ele(arr,x,k,n);
	for(int i=0;i<res.size();i++){
		cout<<res[i]<<" ";
	}
	cout<<endl;
	return 0;
}