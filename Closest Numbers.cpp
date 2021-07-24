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
#define scan(arr,num) for(int i = 0;i<num;i++)cin>>arr[i]; 

void solve(){
	int N;
	cin >> N;
	vector<ll> bils(N);
	scan(bils,N);
	sort(all(bils));
	vector<ll> dif;
	ll mindif = bils[1] - bils[0];
	for(int i = 0;i < N - 1;i++){
		if(bils[i+1] - bils[i] <= mindif){
			mindif = bils[i+1] - bils[i];
		}	
	}
	for(int i=0;i<N-1;i++){
		if(bils[i+1] - bils[i] == mindif)
			cout << bils[i] << " " << bils[i+1] << " ";
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





