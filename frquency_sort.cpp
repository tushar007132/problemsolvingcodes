#include<bits/stdc++.h>
using namespace std;
void frequency_sort(int arr[],int n){

	//creation of map for storing the frequency 
	map<int,int> mp;
	for(int i=0;i<n;i++){
		mp[arr[i]]++;
	}
	//creation of maxheap
	priority_queue<pair<int,int>> maxh;
	for(auto it=mp.begin();it!=mp.end();it++){
		maxh.push({it->second,it->first});
	}

	//result output
	while(maxh.size()>0){
		int freq=maxh.top().first;
		int ele=maxh.top().second;

		for(int i=1;i<=freq;i++){
			cout<<ele<<" ";
		}
		maxh.pop();
	}

}
int main(){
	int arr[]={1,1,1,2,3,4,4,5},n=8;
	frequency_sort(arr,n);
	return 0;
}