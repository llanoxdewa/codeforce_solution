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



void solve(){
	int x1,x2,x3;
	cin >> x1 >> x2 >> x3;
	int maxd = max({x1,x2,x3});
	int mind = min({x1,x2,x3});
	int target = (x1 + x2 + x3) - (maxd + mind);
	cout << (maxd - target) + (target - mind) << endl;
}





int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
	#ifndef ONLINE_JUDGE
		freopen("dbg.txt","w",stderr);
   	#endif
	solve();
	return 0;
}
