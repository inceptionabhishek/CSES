#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long	
 
int main(){
	ll t;
	cin>>t;
	ll a[t];
	for(int i=0;i<t;i++){
		cin>>a[i];
	}
	ll count=0;
	sort(a,a+t);
	for(int i=0;i<t;i++){
		if(a[i]!=a[i+1]){
			count++;
		}
	}
	cout<<count<<endl;
	return 0;
}