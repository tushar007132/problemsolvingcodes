#include<bits/stdc++.h>
using namespace std;
int biotonic_search(int arr[],int n){
	int start=0,end=n-1;
	while(start<=end){
		int mid=start+(end-start)/2;
		if(mid>0 && mid<n-1){
			if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1])       return arr[mid];
			else if(arr[mid]<arr[mid-1])                         end=mid-1;
			else if(arr[mid]<arr[mid+1])                         start=mid+1;
		}
		else if(mid==0 && arr[0]>arr[1])          return arr[0];
		else if(mid==n-1 && arr[n-1]>arr[n-2])    return arr[n-1];
	}
	return -1;
}

int main(){
	int arr[]={1,2,3,5,13,15,6,2},n=8;
	int res=biotonic_search(arr,n);
	if(res!=-1)                       cout<<res<<endl;
	else                              cout<<"Element Not Found"<<endl;
	return 0;
}