#include<bits/stdc++.h>
using namespace std;
void k_closest_point(int arr[][2],int n,int m,int k){
	priority_queue<pair<int,pair<int,int>>> maxh;
	for(int i=0;i<n;i++){
		maxh.push({arr[i][0]*arr[i][0]+arr[i][1]*arr[i][1],{arr[i][0],arr[i][1]}});

		if(maxh.size()>k)   maxh.pop();
	}

	while(maxh.size()>0){
		pair<int,int> p;
		p=maxh.top().second;
		cout<<p.first<<" "<<p.second<<endl;
		maxh.pop();
	}
}
int main(){
	int arr[][2]={{1,3},{-2,2},{5,8},{0,1}},n=4,m=2,k=2;
	k_closest_point(arr,n,m,k=2);
	return 0;
}