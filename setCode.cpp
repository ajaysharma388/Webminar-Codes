#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define endl "\n"

int main(){
	#ifndef ONLINE_JUGDE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	freopen("error.txt","w",stderr);
	#endif	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // 1. always stores the data in sorted order.
    // 2. stores only unique values.
	set<int> s;
	int n;
	cin >> n;
	s.insert(7);
	s.insert(1);
	s.insert(3);
	s.insert(6);
	s.insert(4);
	s.insert(2);
	s.insert(5);
	s.insert(7);
	s.insert(1);
	// for(auto x:s){
	// 	cout<<x<<" ";
	// }
	// cout<<endl;
	set<int> :: iterator it = s.begin();
	for(;it!=s.end();++it){
		cout<<*it<<" ";
	}
	cout<<endl;
    s.clear();
    cout<<s.size()<<endl;
	return 0;
}