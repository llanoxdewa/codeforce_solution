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
	string ladybugs;
	cin >> N >> ladybugs;
	map<char,int> counter;		
	for(char bugs : ladybugs)
		counter[bugs]++;
	for(auto& fbug : counter){
		if(fbug.first != '_' && fbug.second == 1){
			print("NO");
			return;	
		}
	}	
	if(counter['_'] > 0){
		print("YES");
		return;
	} 		
	int pair = 0;
	for(int i = 0;i < (int)ladybugs.size() - 1;i++){
		if(ladybugs[i] == ladybugs[i + 1])
			pair++;
		else if(pair > 0)
			pair = 0;
		else {
			print("NO");
			return;	
		}
			
	}
	print("YES");
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





