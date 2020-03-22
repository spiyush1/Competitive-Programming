//Application of Fermat's Little Theorem for nCr

#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long int
#define f first
#define s second
#define mp make_pair
using namespace std;

ll power(ll a, ll p)
{
	ll ans = 1;
	while(p)
	{
		if(p&1)
			ans = (ans*a)%mod;
		a = a*a%mod;
		p=p>>1;
	}
	return ans;
}

ll modInverse(ll a)
{
	return power(a,mod-2);
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int h,w,a,b;
	cin>>h>>w>>a>>b;
	ll fact[h+w+1];
	fact[0]=1;
	
	for(int i = 1; i<h+w+1; i++)
		fact[i]=fact[i-1]*i%mod;
	
	ll ans =0;
	for(int i = b;i<w; i++)
	{
		int n= h-a-1+i;
		ll k = ((fact[n]%mod*modInverse(fact[n-i])%mod)%mod*modInverse(fact[i])%mod)%mod;
		k = k*(fact[a+w-i-2]*modInverse(fact[a-1])%mod*modInverse(fact[w-i-1])%mod)%mod;
		ans = (ans+k)%mod;
	}
	cout<<ans<<endl;
	return 0;
}
