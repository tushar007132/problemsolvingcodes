#include<bits/stdc++.h>
using namespace std;
int binary_search_asc(int start,int end,int arr[],int key){
	while(start<=end){
		int mid=start+(end-start)/2;
		if(arr[mid]==key)              return mid;
		else if(arr[mid]>key)          end=mid-1;
		else if(arr[mid]<key)                          start=mid+1;               
	}
	return -1;
}

int binary_search_desc(int start,int end,int arr[],int key){
	while(start<=end){
		int mid=start+(end-start)/2;
		if(arr[mid]==key)              return mid;
		else if(arr[mid]>key)          start=mid+1;
		else if(arr[mid]<key)          end=mid-1;               
	}
	return -1;
}

int PeakElement(int arr[],int n){
	int start=0,end=n-1;
	while(start<=end){
		int mid=start+(end-start)/2;
		if(mid>0 && mid<n-1){
		if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])       return mid;
		else if(arr[mid-1]>arr[mid])                         end=mid-1;
		else if(arr[mid+1]>arr[mid])                         start=mid+1;
    	}
    	if(mid==0 && arr[1]<arr[0])                       return arr[0];
	    if(mid==n-1 && arr[n-1]>arr[n-2])                 return arr[n-1];
	}
	return -1;
}

int main(){
	int arr[]={-3,9,18,20,17,5,1},n=7,key=1;
	int index=PeakElement(arr,n);
	int r1=binary_search_asc(0,index-1,arr,key);
	int r2=binary_search_desc(index,n,arr,key);
	if(r1==-1 && r2==-1)                      cout<<"Element Not Found"<<endl;
	else if(r1!=-1)                           cout<<r1<<endl;
	else if(r2!=-1)                           cout<<r2<<endl;
	return 0;
}