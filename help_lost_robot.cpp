#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int x1,y1,x2,y2;
		cin>>x1>>x2>>y1>>y2;
		int flag=-1;
		if((x2-1==x1) && (y2==y1))             flag=1;
		else if((x2+1==x1) && (y2==y1))        flag=2;
		else if((x2==x1) && (y2-1==y1))        flag=3;
		else if((x2==x1) && (y2+1==y1))        flag=4;

		if(flag==-1)  cout<<"sad"<<endl;
		else{
			switch(flag){
				case 1: cout<<"right"<<endl;break;
				case 2: cout<<"left"<<endl;break;
				case 3: cout<<"up"<<endl;break;
				case 4: cout<<"down"<<endl;break;
			}
		}
	}
	return 0;
}