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

const string numbers = "0123456789";
const string lower_case = "abcdefghijklmnopqrstuvwxyz";
const string upper_case = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
const string special_characters = "!@#$%^&*()-+";


bool is_valid_spe(char& p){
	for(int i = 0;i < sz(special_characters);i++){
		if(p == special_characters[i])
			return 1;
	}		
	return 0;
}


void solve(){
	int N;
	string password;
	cin >> N >> password;
	auto cek_validation = [&](string& pass){
		int numvalid = 1,lowvalid = 1,upvalid = 1,spevalid = 1;	
		for(char p : pass){
			if(is_valid_spe(p)){
				spevalid = 0;
			}
			else if(isupper(p))
				upvalid = 0;	
			else if(islower(p))
				lowvalid = 0;
			else if(binary_search(all(numbers),p))
				numvalid = 0;
		}
		return (numvalid + lowvalid + upvalid + spevalid); 	
	};

	int jumlah_kurang = cek_validation(password);
	if(N < 6){
		int after = N + jumlah_kurang;	
		if(after < 6)
			jumlah_kurang += 6 - after;
		print(jumlah_kurang);	
		return;	
	}
	print(jumlah_kurang);
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





