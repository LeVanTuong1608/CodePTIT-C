#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;cin>>t;
	while (t--){
		int n;cin>>n;
		int a[n];
		for (int i=0;i<n;i++){
			cin>>a[i];
		}
		int min=1e6;
		for (int i=0;i<n-1;i++){
			for (int j=i+1;j<n;j++){
				if (abs(min)>abs(a[j]+a[i])){
					min=a[j]+a[i];
				}
			}
		}
		cout<<min<<endl;
	}
}
