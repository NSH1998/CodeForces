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
	
	int a,b,n;
	cin>>a>>b>>n;
	int i=1;
	while(n!=0){
		if(i%2!=0){
			n = n-(__gcd(a,n));
		}
		else{
			n = n-(__gcd(b,n));
		}
		i++;
	}
	(i%2==0) ? cout<<0 : cout<<1;
   	return 0;
}