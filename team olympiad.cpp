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

const int maxN = 5000;

void solve(){
	int n,s,w;
	int t1[maxN],t2[maxN],t3[maxN];
	int x = 0,y = 0 ,z = 0; 
	cin >> n;	
	int inputs[n];
	for(int i = 0;i < n;i++)
		cin >> inputs[i];
	for(int i = 0;i < n;i++){
		if(inputs[i] == 1){
			t1[x] = i + 1;
			x++;
		} else if(inputs[i] == 2){
			t2[y] = i + 1;
			y++;
		} else if(inputs[i] == 3){
			t3[z] = i + 1;
			z++;
		}
	}
	s=min(x,y);
    w=min(s,z);
	cout << w << endl;
	for(x = 0,y = 0,z = 0;x < w,y < w,z < w;x++,y++,z++){
		cout << t1[x] << " " << t2[y] << " " << t3[z] << endl;;
	}
}



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
	#ifndef ONLINE_JUDGE
		freopen("dbg.txt","w",stderr);
   	#endif
	solve();
	
	return 0;
}
