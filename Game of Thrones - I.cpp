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
	map<char,int> fkata;			
	for(char w : words)
		fkata[w]++;
	int valid = 0;	
	for(auto fk : fkata){
		if(fk.second % 2 == 0)
			valid++;
	}
	int N = sz(fkata);	
	if(valid == N - 1 || valid == N){
		print("YES");	
	} else 
		print("NO");
	
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





