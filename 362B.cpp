#include <bits/stdc++.h>
#define lld long long int
#define vi vector<int>
#define vlld vector<lld>
#define pb push_back
#define ff first
#define ss second
#define pii pair<int,int>
#define mii map<int, int>
#define vii vector<pii>
 
using namespace std;
 
 
 
int main(){
   	std::ios::sync_with_stdio(false);
   	#ifndef ONLINE_JUDGE
   	freopen("input.txt", "r", stdin);
   	freopen("output.txt", "w",stdout);
   	#endif
	
	int n,m;
	cin>>n>>m;
	if(m==0){
		cout<<"YES";
		return 0;
	}
	vi v(m);
	for(int i=0;i<m;i++){
		cin>>v[i];
	}
	sort(v.begin(), v.end());
	if(v[0]==1 || v[m-1]==n){
		cout<<"NO";
		return 0;
	}
	if(m<3){
		cout<<"YES";
		return 0;
	}
	for(int i=2;i<m;i++){
		if(v[i]==v[i-1]+1 && v[i-1]==v[i-2]+1){
			cout<<"NO";
			return 0;
		}
	}
	cout<<"YES";
   	return 0;
}