#include <sstream>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <math.h>
#include <set>
using namespace std;

// debungging
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " -> ";_print(x);cerr << endl;
#define debugArr(x,y) cerr << #x << " -> ";_print(x,y);cerr << endl;
#else
#define debug(x)
#define debugArr(x,y)
#endif
template<typename T> void _print(T arg){cerr << arg << " ";}
template<typename V> void _print(vector<V> arg){cerr << "[ ";for(V bil : arg) cerr << bil << " | ";cerr << "]";}
template<typename K,typename V> void _print(map<K,V> arg){cerr << "{ ";for(auto &val : arg) cerr << val.first << " => " << val.second << " | ";cerr << "}";}
template<typename A> void _print(A args[],int len){cerr << "[ ";for(int i = 0;i < len;i++)cerr << args[i] << " | ";cerr << "]";}

// definition of data type
#define ll long long
#define ull unsigned long long


int sum(vector<int> arr){
	int total = 0;
	for(int bil : arr)
		total += bil;
	return total;
}




void solve(){
	int a,b;
	cin >> a >> b;
	vector<int> bila;
	vector<int> bilb;
	for(int i = 0;i < 2;i++){
		for(int j = 0;j < a;j++){
			int bil;
			cin >> bil;
			if(!i)
				bila.push_back(bil);
			else
				bilb.push_back(bil);
		}	
	}
	if(!b){
		cout << sum(bila) << endl;
		return;
	}
	sort(bila.begin(),bila.end());
	sort(bilb.begin(),bilb.end());
	for(int i = 0;i < b;i++){

		if(bila[i] > bilb[a - i - 1]) break;
		swap(bila[i],bilb[a - i - 1]);	
	}

	cout << sum(bila) << endl; 
}





int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
	#ifndef ONLINE_JUDGE
		freopen("dbg.txt","w",stderr);
   	#endif
	int t;
	cin >> t;
	while(t--)
		solve();
	
	return 0;
}
