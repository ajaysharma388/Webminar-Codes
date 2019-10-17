#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define endl "\n"

class Vector{
		int *arr,max_size,cs;
	public:
		// constructor that initialises the vector with default
		// size as 4. 
		Vector(const int defaultSize=4){
			reserve(defaultSize);
		}
		// this method first check if we can push into array 
		// and if we can then it simply put's data in the end.
		// and if not it creates the new array with larger size
		// copy data into new array and then delete the old one.
		void push_back(const int data){
			if(cs==max_size){
				int *oldArr = arr;
				max_size*=2;
				arr=new int[max_size];
				for(int i=0;i<cs;++i){
					arr[i]=oldArr[i];
				}
				delete []oldArr;
			}
			arr[cs++]=data;
		}
		// checks whether the data is available in the array
		// or not.
		bool empty(){
			return cs==0;
		}
		// delete the element from back of the array.
		void pop_back(){
			if(!empty()) cs--;
		}
		// prints the data of the array into the console.
		void print() const {
			for(int i=0;i<cs;++i){
				cout<<arr[i]<<" ";
			}
		}
		// reserve the array size as per the user request.
		void reserve(const int size){
			max_size=size;
			cs=0;
			arr = new int[max_size];
		}
		// return the capacity of the array.
		int capacity() const {
			return max_size;
		}
		// this method returns the data at i'th index.
		int at(const int index)const {
			if(index<=cs) return arr[index];
		}
		int size() const {
			return cs;
		}
		void vsort(){
			sort(arr,arr+cs);
		}
		int& operator[] (const int index){
			if(index<=cs) return arr[index];
		}		
};

ostream& operator<< (ostream &os,const Vector &vec){
	vec.print();
	return os;
}

// istream& operator>> (istream &is,Vector &vec){
// 	vec.push_back(data);
// }

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
	Vector vec;
	vec.reserve(100);
	for(int i=0;i<n;++i){
		int data;
		cin >> data;
		vec.push_back(data);
	}
	vec.vsort();
	vec.print();
	cout<<vec.capacity()<<endl;
	vec.push_back(19);
	vec.push_back(17);
	cout<<vec.capacity()<<endl;
	//vec.print();
	for(int i=0;i<vec.size();++i){
		cout<<vec[i]<<" ";
	}
	cout<<endl<<vec[4]<<endl;

	/*
		In the below statement you can see that 
		we are able to casecade the operator<<
		that was happening because the we are
		returning the ostream object in return 
		back to the place from where it is being 
		called this is known as the casecading of
		operator's.
	*/
	cout<<vec<<endl;
	vec[1]*=55;
	cout<<vec<<endl;
	return 0;
}