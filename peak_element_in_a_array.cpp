#include<bits/stdc++.h>
using namespace std;
int PeakElement(int arr[],int n){
	int start=0,end=n-1;
	while(start<=end){
		int mid=start+(end-start)/2;
		
		if(mid>0 && mid<n-1){
		if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])     return arr[mid];
		else if(arr[mid-1]>arr[mid])                       end=mid-1;
		else if(arr[mid+1]>arr[mid])                       start=mid+1;
	    }

	    if(mid==0 && arr[1]<arr[0])                       return arr[0];
	    if(mid==n-1 && arr[n-1]>arr[n-2])                 return arr[n-1];
	}
	return -1;
}
int main(){
	int arr[]={5,10,20,15},n=4;
	int res=PeakElement(arr,n);
	if(res!=-1)                    cout<<res<<endl;
	else                           cout<<"No Peak Element"<<endl;
	return 0;
}