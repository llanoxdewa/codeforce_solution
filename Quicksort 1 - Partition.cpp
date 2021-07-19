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
	int p = bils[0];
	int jejak = 0;
	vector<int> ans = {p};	
	for(int i=0;i<N;i++){
		if(bils[i] > p) 
			ans.push_back(bils[i]);	
		else if(bils[i] < p){
			ans.insert(ans.begin()+jejak,bils[i]);
			jejak++;	
		}	
	}
	for(int bil : ans)
		cout << bil << " ";
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





