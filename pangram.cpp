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

string alfabet = "abcdefghijklmnopqrstuvwxzy"; 

void solve(){
	string words;
	getline(cin,words);	
	for(int i=0;i<sz(words);i++){
		if(words[i] != ' '){
			words[i] = tolower(words[i]);
		}
	}	
	set<char> ans(all(words));	
	cout << ((sz(ans) - 1==26)? "pangram" : "not pangram") << endl;
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





