#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define endl "\n"

bool compare(int a,int b){
	return a>b;
}

int main(){
	#ifndef ONLINE_JUGDE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	freopen("error.txt","w",stderr);
	#endif	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n;
	cin >> n;
	int *a = new int[n];
	for(int i=0;i<n;++i){
		cin >> a[i];
	}
	sort(a,a+n,compare);
	for(int i=0;i<n;++i){
		cout << a[i] << " ";
	}
	return 0;
}