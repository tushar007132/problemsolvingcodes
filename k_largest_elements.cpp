#include<bits/stdc++.h>
using namespace std;
void klargest(int arr[],int n,int k){
	priority_queue<int,vector<int>,greater<int>>  minh;
	for(int i=0;i<n;i++){
		minh.push(arr[i]);

		if(minh.size()>k)    minh.pop();
	}

	while(minh.empty()==false){
		cout<<minh.top()<<" ";
		minh.pop();
	}
}
int main(){
	//min heap implementation using stl template
	int arr[]={7,10,4,3,20,15},n=6,k=0;
	if(k>n || k<=0)         cout<<"Not possible"<<endl;
	else                 	klargest(arr,n,k);
	return 0;
}