#include<bits/stdc++.h>
using namespace std;
vector<int> StockSpan(int arr[],int n){
	vector<int> v;
	stack<pair<int,int>> S;

	for(int i=0;i<n;i++){
		if(S.size()==0)                                          v.push_back(-1);
		else if(S.size()>0 && S.top().first>arr[i]){
			v.push_back(S.top().second);
		}
		else if(S.size()>0 && S.top().first<=arr[i]){
			while(S.size()>0 && S.top().first<=arr[i])          S.pop();
			if(S.size()==0)                                     v.push_back(-1);
			else                                                v.push_back(S.top().second);
		}
		S.push({arr[i],i});
	}
	return v; 
}
int main(){
	int price[]={100,80,60,70,60,75,85},n=7;
	vector<int> res=StockSpan(price,n);
	for(int k=0;k<res.size();k++)  cout<<k-res[k]<<" ";
	cout<<endl;
	return 0;
}