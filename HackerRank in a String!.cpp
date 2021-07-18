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

// HackerRank 
string alfa = "hackerrank";
const int N = 7;

void solve(){
	string spe = "ark"; 
	string words;
	cin >> words;
	string ans = "";	
	int pos = 0;	
	for(char c : words){
		// hackerrank	
		if(*find(all(alfa),c)){
			if(c == alfa[pos]){
				ans += c;
				pos++;
			}
		}	
	}
	cout << ((ans == alfa)? "YES" : "NO") << endl;	
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





