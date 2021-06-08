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

int sum(vector<int> bils){
	int jmlh = 0;
	for(int bil : bils)
		jmlh += bil;
	return jmlh;
}


void solve(){
	int bil;
	cin >> bil;
	bil /= 2;
	vector<int> genap,ganjil;
	int b = 2;	
	while(bil--){
		genap.push_back(b);
		ganjil.push_back(b - 1);
		b += 2;	
	}

	bool sama = 0;

	if(genap.size() >= 2){
		ganjil.pop_back();
		int gb = genap.back() + (genap.size() - 1);
		if(sum(genap) == sum(ganjil) + gb && gb % 2 != 0){
			sama = 1;	
			ganjil.push_back(gb);	
		}	
	}

	if(sama){
		cout << "YES" << endl;
		for(int b : genap) cout << b << " ";
		for(int b : ganjil) cout << b << " ";
		cout << endl;
	} else 	
		cout << "NO" << endl;	
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
