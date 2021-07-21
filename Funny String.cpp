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
	string words;		
	cin >> words;
	vector<vector<int>> difs(2,vector<int>());	
	auto same = [&](vector<int>& arr1,vector<int>& arr2) -> bool {
		for(int i = 0;i < sz(arr1);i++){
			if(arr1[i] == arr2[i])
				continue;
			return false;	
		}			
		return true;	
	};	
	for(int i = 0;i < sz(words) - 1;i++){
		difs[0].push_back(abs(int(words[i] - words[i + 1])));
	}
	reverse(all(words));	
	for(int i = 0;i < sz(words) - 1;i++){
		difs[1].push_back(abs(int(words[i] - words[i + 1])));
	}
	cout << ((same(difs[0],difs[1])? "Funny" : "Not Funny")) << endl;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	#ifdef LANO_DEBUG
		cout << "DEBUG IS ON" << endl;
		freopen("dbg.txt","w",stderr);
	#endif
	int T;cin >> T;	
	while(T--)	
		solve();	
	return 0;
}





