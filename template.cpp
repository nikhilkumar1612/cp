#include<bits/stdc++.h>
using namespace std;
 
 
#define ll 				long long
#define vi 				vector<ll>
#define pii				pair<ll,ll>
#define mod 			1000000007
#define inf 			1e18
#define ff 				first
#define ss 				second
#define pb				push_back
#define mpii 			map<ll,ll>
#define ps(x,y) 		fixed<<setprecision(y)<<x
#define w(t)			cin>>t; while(t--)
 
 
void init() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
 
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

ll gcd (ll a, ll b){
	if(b == 0){
		return a;
	}
	else{
		return gcd(b, a%b);
	}
}

bool isPrime(ll a){
	bool prime = true;
	if(a<=1)
		return false;
	if(a == 2 || a == 3)
		return true;
	for(ll i=5; i*i<=a; i+=6){
		if(a%i == 0){
			prime = false;
			break;
		}
	}
	return prime;
}

int main() {
	init();
	ll a, b;
	cin >> a;
	bool prime = isPrime(a);
	cout<< prime <<endl;
}