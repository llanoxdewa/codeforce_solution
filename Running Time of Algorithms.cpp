//2021-07-18 Minggu 01:30 
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
	for(int i=0;i<N;i++)
		cin >> bils[i];
	int ans = 0;
	for(int i=0;i<N;i++){
		for(int j=0;j<N-1;j++){
			if(bils[j] > bils[j + 1]){
				swap(bils[j],bils[j+1]);
				ans++;	
			}
		}	
	}
	print(ans);	
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





