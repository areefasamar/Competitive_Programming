// Problem: Hulk
// URL: https://codeforces.com/contest/705/problem/A
// Rating: 800

#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	
	for ( int i=1; i<=n; i++){
		if( i%2==0 ){
			cout<<"I love ";
			if(i==n){
				cout<<"it ";
				return 0;
			}
			else{
				cout<<"that ";
			}
		}
		
		else{
			cout<<"I hate ";
			if(i==n){
				cout<<"it ";
				return 0;
			}
			else{
				cout<<"that ";
			}
		}
	}
}
