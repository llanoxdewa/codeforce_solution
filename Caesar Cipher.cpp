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


string alfabet = "abcdefghijklmnopqrstuvwxyz";

void solve(){
	int N;
	string words;
	int K;
	cin >> N >> words >> K;
	if(K > 26){
		K -= 26 * floor(K / 26);	
	}
	string subs = alfabet.substr(0,K);	
	alfabet.erase(0,K);
	alfabet += subs;
	for(int i=0;i<N;i++){
		if(words[i] < 65 || (words[i] > 90 && words[i] < 97) || words[i] > 122)
			continue;
		if(isupper(words[i])){
			words[i] = toupper(alfabet[words[i] - 65]);	
			continue;	
		}	
		words[i] = alfabet[words[i] - 97];		
	}
	print(words);
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





