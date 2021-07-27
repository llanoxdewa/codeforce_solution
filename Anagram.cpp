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
	if(sz(words) % 2 == 1){
		print(-1);
		return;
	}
	int mid = sz(words) / 2; 
	string left = words.substr(0,mid);
	string right = words.substr(mid,mid); 
	int ans = 0;	
	for(char k : right){
		if(*find(all(left),k)){
			left.erase(find(all(left),k));	
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
		cout << "DEBUG IS ON" << endl;
		freopen("dbg.txt","w",stderr);
	#endif
	int T;cin >> T;	
	while(T--)	
		solve();	
	return 0;
}





