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
    int a[] = {1,1,2,2,2,2,2,2,3,4,5,6,7,7,7,8};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<n<<endl;
    int *first = lower_bound(a,a+n,2);
    // we can also use auto instead of int *first;
    int *last = upper_bound(a,a+n,2);

    int firstInd = lower_bound(a,a+n,2)-a;
    int lastInd = upper_bound(a,a+n,2)-(a+1);
    cout<<firstInd<<" "<<lastInd<<endl;
	return 0;
}