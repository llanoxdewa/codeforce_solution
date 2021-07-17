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
#define sz(arr) (int)arr.size()



void solve(){
	string signals;
	cin >> signals;
	const int N = sz(signals); 	
	int dif = 0;
	
	for(int i=0;i<N;i+=3){
		for(int j=i,idx = 0;j<N && idx < 3;j++,idx++){
			if(idx == 0 && signals[j] != 'S')
				dif++;
			else if(idx == 1 && signals[j] != 'O')
				dif++;
			else if(idx == 2 && signals[j] != 'S')
				dif++;
		}	
	}
	print(dif);
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





