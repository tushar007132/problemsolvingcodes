#include<bits/stdc++.h>
using namespace std;
int min_diff(int arr[],int key,int n){
	int start=0,end=n-1;
	while(start<=end){
		int mid=start+(end-start)/2;
		if(arr[mid]==key)               return 0;
		else if(arr[mid]<key)           start=mid+1;
		else if(arr[mid]>key)           end=start-1;
	}
	return min(abs(arr[end]-key),abs(arr[start]-key));
}
int main(){
	int arr[]={1,3,5,10,12,15},key=7,n=6;
	int res=min_diff(arr,key,n);
	cout<<res<<endl;
	return 0;
}