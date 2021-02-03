#include<bits/stdc++.h>
using namespace std;
int first_occurence(int arr[],int n,int key){
	int start=0,end=n-1,res=-1;
	while(start<=end){
		int mid=start+(end-start)/2;
		if(arr[mid]==key){
		     res=mid;end=mid-1;  
		}     
		else if(arr[mid]>key)       end=mid-1;
		else                        start=mid+1;           
	}
	return res;
}

int last_occurence(int arr[],int n,int key){
	int start=0,end=n-1,res=-1;
	while(start<=end){
		int mid=start+(end-start)/2;
		if(arr[mid]==key){
			res=mid;start=mid+1;
		}               
		else if(arr[mid]>key)           end=mid-1;
		else                            start=mid+1;
	}
	return res;
}

int main(){
	int arr[]={1,3,3,3,4,5,5,6},n=8;
	int key=3;
	int f1=first_occurence(arr,n,key);
	int f2=last_occurence(arr,n,key);
	if(f1==-1 && f2==-1)                   cout<<"Element not found"<<endl;
	else                                   cout<<f2-f1+1<<endl;                 
	return 0;
}