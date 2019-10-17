#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define endl "\n"
/*
    1. bitset is memory efficient way to store bools.
    2. bool takes 1 byte of space for one var.
    3. whereas, bitset takes only one bit so,that is so
       efficient in terms of memory. 
*/
int main(){
	#ifndef ONLINE_JUGDE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	freopen("error.txt","w",stderr);
	#endif	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    bitset<20> bit;
    for(int i=0;i<20;++i){
        if(i&1) bit[i]=1;
    }
    cout<<bit<<endl;
	return 0;
}