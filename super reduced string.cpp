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
	string words;
	cin >> words;
	int N = (int)words.size();
	for(int i = 0;i < N;i++){
		for(int j = 0;j < N - 1;j++){
			if(words[j] == words[j + 1]){
				words.erase(j,2);	
			}	
		}
		if(words.size() == 0)
			break;
	} 
	cout << ((!words.size())? "Empty String" : words ) << endl;
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





