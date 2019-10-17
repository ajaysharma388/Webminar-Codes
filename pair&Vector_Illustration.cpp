#include <bits/stdc++.h>
using namespace std;
#define psi pair<string,int>

bool compare(psi p1,psi p2){
    if(p1.first<p2.first){
        return true;
    }else if(p1.first>p2.first){
        return false;
    }else{
        return (p1.second<p2.second) ? true : false;
    }
}

int main() {
    vector<psi> fruits;
    int n;
    cin >> n;
    for(int i=0;i<n;++i){
        string fruit;
        int price;
        cin >> fruit >> price;
        fruits.push_back(make_pair(fruit,price));
    }
    sort(fruits.begin(),fruits.end(),compare);
    for(auto p:fruits){
        cout<<p.first<<" : "<<p.second<<endl;
    }
    return 0;
}
