#include<bits/stdc++.h>
using namespace std;


#define ll 				long long

ll primeFactors(ll n)
{
	ll max = -1;
	while (n % 2 == 0)
	{
		n = n / 2;
		max = 2;
	}
	for (ll i = 3; i * i <= n; i = i + 2)
	{
		while (n % i == 0)
		{
			n = n / i;
			max = i;
		}
	}
	if (n > 2) {
		if (n > max)
			max = n;
	}
	return max;
}
int main() {
	ll x = 600851475143;
	cout << "Max prime factor is: " << primeFactors(x) << "\n";
	return 0;
}