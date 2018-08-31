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
	
	int n;
	cin>>n;
	int cnt=0;
	string s,pres = "";
	for(int i=0;i<n;i++){
		cin>>s;
		if(pres!=s){
			cnt++;
			pres = s;
		}
	} 
	cout<<cnt;
   	return 0;
}