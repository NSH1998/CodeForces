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

   	float n,x;
   	cin>>n;
   	std::vector<float> v(5,0);
   	for(int i=0;i<n;i++){
   		cin>>x;
   		v[x]++;
   	}
   	int cnt = 0;
   	cnt += v[4];
   	v[4] = 0;
   	cnt += v[3];
   	v[1] -= v[3];
   	v[3] = 0;
   	if(v[1]<0) v[1]=0;
   	cnt+= v[2]/2;
   	v[2] -= int(v[2]/2) * 2;
   	if(v[2]!=0){
   		cnt+= 1;
   		v[1] -= 2;
   	}
   	if(v[1]>0) cnt += ceil(v[1]/4);
   	//cout<<ceil(v[1]/4)<<" ";
   	cout<<cnt;

	
	return 0;
}