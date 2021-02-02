#include<bits/stdc++.h>
using namespace std;
int BinarySearch(int start,int end,int arr[],int key){
	while(start<=end){
		int mid=start+(end-start)/2;
		if(arr[mid]==key)               return mid;
		else if(arr[mid]>key)           end=mid-1;
		else                            start=mid+1;
	}
	return -1;
}
int rotationalindex(int arr[],int n){
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
	int arr[]={4,5,7,1,2,3},n=6;
	int key=7;
	int index=rotationalindex(arr,n);
	int r1=BinarySearch(0,index,arr,key);
	int r2=BinarySearch(index,n,arr,key);
	if(r1==-1 && r2==-1)                                        cout<<"Element Not Found"<<endl;
	else if(r1!=-1)                                             cout<<r1<<endl;
	else                                                        cout<<r2<<endl;                                                                     
	return 0;
}