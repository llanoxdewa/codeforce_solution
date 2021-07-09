#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
#include <set>
#include <string>
#include <map>

using namespace std;

// debugging
//#include "testing_unit/debug.h"
// shorcut
#define ll long long
#define ull unsigned long long
#define print(val) cout << val << '\n';
#define all(arr) arr.begin(),arr.end()

void solve(){
	int N,T;
	cin >> N >> T;
	vector<int> widths(N);
	for(int& width : widths)
		cin >> width;
	for(int i = 0;i < T;i++){
		int entry,exit;
		cin >> entry >> exit;
		int minwidth = min(widths[entry],widths[exit]);	
		for(int j = entry;j <= exit;j++){
			if(widths[j] < minwidth)
				minwidth = widths[j];
		}
		print(minwidth);	
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	#ifdef LANO_DEBUG
		cout << "DEBUG IS ON" << endl;
		freopen("dbg.txt","w",stderr);
	#endif
	solve();
	return 0;
}









