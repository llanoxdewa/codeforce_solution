#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
#include <set>
#include <string>
#include <map>
#include <valarray>
using namespace std;

// debugging
//#include "testing_unit/debug.h"
//shorcut
#define ll long long
#define ull unsigned long long
#define print(val) cout << val << '\n';
#define all(arr) arr.begin(),arr.end()
#define sz(arr) (int)arr.size()
#define scan(arr,num) for(int i = 0;i<num;i++)cin>>arr[i]; 

void solution(){
	int N;
	ll K;
	cin >> N >> K;
	vector<int> bi(N);
	map<int,int> pos;	
	for(int i = 0;i < N;i++){
		cin >> bi[i];
		pos[bi[i]] = i;
	}
	int maxbil = *max_element(all(bi));	
	for(int i = 0;i < N;i++){
		if(K == 0)
			break;
		if(bi[i] == maxbil)
			maxbil--;
		if(bi[i] < maxbil){
			int maxpos = pos[maxbil];	
			swap(pos[maxbil],pos[bi[i]]);	
			swap(bi[i],bi[maxpos]);	
			maxbil--;
			K--;
		}	
	}	
	for(int b : bi)
		cout << b << " ";
	cout << endl;
// time limit 3 cases
//	int flag = 0;	
//	for(int i = 0;i < N && K > flag;i++){
//		int maxb = *max_element(bi.begin()+i,bi.end());
//		int post = int(max_element(bi.begin()+i,bi.end())-bi.begin());	
//		if(maxb == bi[i])
//			continue;
//		swap(bi[i],bi[post]);	
//		flag++;	
//	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	#ifdef LANO_DEBUG
		freopen("dbg.txt","w",stderr);
	#endif
	solution();
	return 0;
}





