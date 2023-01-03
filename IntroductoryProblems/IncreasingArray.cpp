#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long	
 
int main(){
	int n;
	cin>>n;
	ll v[n];
	for(ll i=0;i<n;i++){
		cin>>v[i];
	}
	ll count=0;
	for(ll i=0;i<n-1;i++){
		if(v[i]>v[i+1]){
			for(ll j=0;v[i]>v[i+1];j++){
				v[i+1]=v[i+1]+1;
				count++;
			}
		}
	}
	cout<<count<<endl;
 
 
 
	return 0;
}