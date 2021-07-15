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
	int jejak = N - 1;
	for(int i = 0;i < N;i++){
		cin >> bils[i];
	}
	int minbil = bils[N - 1];	
	for(int i = N - 1;i >= 0;i--){
		if(minbil < bils[i]){
			// if j == jejak print(minbil)	
			for(int j = 0;j < N;j++){
				if(j == jejak){
					cout << bils[i] << " "; 	
					continue;
				}	
				cout << bils[j] << " ";	
			}			
			cout << endl;	
			swap(bils[i],bils[jejak]);	
			--jejak;	
		} 
	}
	for(int i = 0;i < N;i++){
		cout << bils[i] << " ";	
	}
	cout << endl;
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





