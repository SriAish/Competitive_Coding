#include <bits/stdc++.h>

using namespace std;

typedef vector <int> vi;
typedef pair <int,int> pii;
typedef long long ll;
typedef unsigned long long ull;
#define fl(i,a,b) for(int i(a);i<(b);i++)
#define rep(i,n) fl(i,0,n)
#define rfl(i,a,b) for(int i(a);i>=(b);i--)
#define srt(v) sort((v).begin(),(v).end())
#define pb push_back
#define mp make_pair
#define MOD 1000000007
#define slen(s) s.length()
#define F first
#define S second

int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n, sockPairNo, maxOnTable = 0, currentOnTable = 0;

	cin >> n;

	set <int> pairs;

	rep(i, 2*n){
		cin >> sockPairNo;
		if(pairs.count(sockPairNo)){
			currentOnTable --;
		}
		else{
			pairs.insert(sockPairNo);
			currentOnTable ++;
			if(currentOnTable > maxOnTable){
				maxOnTable = currentOnTable;
			}	
		}
	}

	cout << maxOnTable;	

	return 0;
}