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
	int N;
	cin >> N;
	vector<string> maps(N,"null");
	for(string& map : maps)
		cin >> map;
	cout << maps.front() << endl;
	for(int i = 1; i < N - 1;i++){
		int n = maps[i].size();
		for(int j = 1;j < n - 1;j++){
			if(maps[i][j] > maps[i - 1][j] && maps[i][j] > maps[i + 1][j] && maps[i][j] > maps[i][j - 1] && maps[i][j] > maps[i][j + 1])
				maps[i][j] = 'X';

		}
		cout << maps[i] << endl;
	}
	cout << maps.back() << endl;
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





