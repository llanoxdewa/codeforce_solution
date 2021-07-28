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
	string w1;
	string w2;
	cin >> w1 >> w2;
	string cpw1 = w1;
	string cpw2 = w2;
	int ans = 0;	
	for(char k : w1){
		if(*find(all(cpw2),k)){
			cpw2.erase(find(all(cpw2),k));	
			continue;
		}
		ans++;	
	}
	for(char k : w2){
		if(*find(all(cpw1),k)){
			cpw1.erase(find(all(cpw1),k));		
			continue;	
		}	
		ans++;	
	}	
	print(ans);
}


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	#ifdef LANO_DEBUG
		freopen("dbg.txt","w",stderr);
	#endif
	solve();	
	return 0;
}





