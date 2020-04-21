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
	int n,a,b;
	cin>>n>>a>>b;
	vector<ll> v(n);
	for(int i = 0,j; i<n; i++)
		cin>>v[i];

	long low = 0 , high = *max_element(v.begin(),v.end()); 
	while(low<high)
	{
		long mid = low + (high-low)/2;
		ll y = a-b;
		ll t = mid*b;
		int i = 0;
		ll p=0;
		for(int i = 0 ; i<n ; i++)
		{
			ll r=0;
			if(v[i]>t)
				r = ceil(double(v[i]-t)/y);
			p+=r;
		}
		if(p<=mid)
			high = mid;
		else
			low = mid+1;
	}
	cout<<low<<endl;
	return 0;
}
