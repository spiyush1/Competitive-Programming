//Based on the no. of factors of a number n
#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long int
#define ar array
#define mp make_pair
using namespace std;
const int n2 = 1e7;
bool primes[n2+1];
vector<int> u;

void seive()
{
	primes[1]=primes[0]= 0;
	for(int i = 2; i<=sqrt(n2); i++)
		if(primes[i])
			for(int j = i*i; j<=n2; j+=i)
				primes[j]=0;
	for(int i = 2; i<n2; i++)
		if(primes[i])
			u.push_back(i);
}

void divisors(ll n, set<ll> &s)
{
	for(int i = 1;i<=sqrt(n); i++)
	{
		if(n%i==0)
		{
			s.insert(i);
			s.insert(n/i);
		}
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	ll n;
	cin>>n;
	set<ll>s,h;
	memset(primes,1,n2);
	seive();
	divisors(n,h);
	for(auto it:h)
	{
		if(it==1)
			continue;
		else if(it==n)
		{
			s.insert(n);
			continue;
		}
		ll t = n,t2 = n;
		ll r = n/it;
		while(t%it==0)
		{
			t/=it;
		}
		while(t2%r==0 && r>1) t2/=r;
		if(t%it==1)
			s.insert(it);
		if(t2%r==1)
			s.insert(r);
	}
	divisors(n-1,s);
	cout<<s.size()-1<<endl;
	return 0;
}
