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
	int N;
	cin >> N;
	int bils[N];
	for(int i = 0;i < N;i++)
		cin >> bils[i];	
	for(int i = 1;i < N;i++){
		int key = bils[i];	
		int idx = i;	
		while(idx > 0 && bils[idx - 1] > key){
			bils[idx] = bils[idx - 1];
			idx--;
		}	
		bils[idx] = key;	
		for(int x = 0;x < N;x++){
			cout << bils[x] << " ";
		}	
		cout << endl;	
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





