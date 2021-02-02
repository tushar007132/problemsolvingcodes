#include<bits/stdc++.h>
using namespace std;
int no_of_rotations(int arr[],int n){
	int start=0,end=n-1;
	while(start<=end){
		int mid=start+(end-start)/2;
		if(arr[mid]<arr[mid-1] && arr[mid]<arr[mid+1])      return mid;
		else if(arr[end]>=arr[mid])                          end=mid-1;
		else if(arr[start]<=arr[mid])                          start=mid+1;                        
	}
	return -1;
}
int main(){
	int arr[]={4,6,8,9,1,2,3,4};
	int n=8;
	int res=no_of_rotations(arr,n);
	if(res!=-1)                       cout<<n-res<<endl;
	else                              cout<<"not found"<<endl;
	return 0;
}