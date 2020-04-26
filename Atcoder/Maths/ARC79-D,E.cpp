//One of the problems are related to input and the other to check the output of the same program
// Approach is different in both cases!!
//Solution to problem D
#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long int
#define ar array
#define mp make_pair
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	ll k;
	cin>>k;
	ll y = k%50;
	ll r = k/50;
	cout<<50<<endl;
	ll a[50];
	iota(a,a+50,r);
	for(int i = 50-y; i<50; i++)
		a[i]++;
	for(int i = 0;i<50; i++)
		cout<<a[i]<<" ";
	cout<<endl;
	return 0;
}

// Solution to E
#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long int
#define ar array
#define mp make_pair
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	ll n;
	cin>>n;
	ll a[n];
	for(int i = 0; i<n; i++)
		cin>>a[i];
	sort(a,a+n,greater<ll>());
	ll cnt = 0;
	while(a[0]>=n)
	{
		for(int i = 0; i<n; i++)
		{
			ll g = a[i]/n;
			cnt += g;
			a[i] = a[i]%n;
			for(int j = 0; j<n; j++)
				if(j!=i)
					a[j] += g;
		}
		sort(a,a+n,greater<ll>());
	}
	cout<<cnt<<endl;
	return 0;
}
