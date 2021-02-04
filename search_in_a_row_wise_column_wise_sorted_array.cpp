#include<bits/stdc++.h>
using namespace std;
int main(){
	int arr[4][4]={{10,20,30,40},{15,25,35,45},{27,29,37,48},{32,33,39,50}};
	int key=35,n=4,m=4;
	int i=0,j=m-1,found_i=-1,found_j=-1;
	while((i>=0 && i<n) && (j>=0 && j<m)){
		if(arr[i][j]==key){
		    found_i=i;
		    found_j=j;
		    break;
		}
		else  if(arr[i][j]>key)              j--;
		else if(arr[i][j]<key)               i++;
	}
	if(found_i==-1 && found_j==-1)   cout<<"Element not found"<<endl;
	else                             cout<<"Element found at : "<<found_i<<" "<<found_j<<endl;
	return 0;
}