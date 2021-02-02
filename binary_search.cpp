#include<bits/stdc++.h>
using namespace std;
int binary_search(int arr[],int key,int n){
	int start=0,end=n-1;
	while(start<=end){
		int mid=start+(end-start)/2;
		if(arr[mid]==key)             return mid;
		else if(arr[mid]>key)         end=mid-1;
		else                          start=mid+1;
	}
	return -1;
}
int main(){
	int arr[]={1,2,5,6,7},key=9,n=5;
	int res=binary_search(arr,key,n);
	if(res!=-1)  cout<<res<<endl;
	else         cout<<"not found"<<endl;
	return 0;
}