//COMBINATIONS
#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long int
#define ar array
#define pb push_back
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin>>n;
	string s,t;
	cin>>s>>t;
	ll ans = 1;
	char ch = '\n';
	for(int i = 0; i<n; i++)
	{
		if(i+1<n)
		{
			if(s[i]==s[i+1])
			{
				if(i==0)
					ans = 6;
				else if(ch=='X')
					ans = ans*2%mod;
				else
					ans = ans*3%mod;
				ch = 'Y';
				i++;
			}
			else
			{
				if(i==0)
					ans = 3;
				if(ch=='X')
					ans = ans*2 %mod;
				ch = 'X';
			}
		}
		else
		{
			if(i==0)
				ans = 3;
			if(ch=='X')
				ans = ans*2 %mod;
			ch = 'X';
		}
	}
	cout<<ans<<endl;
	return 0;
}
