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
	string s;
	cin>>s;
	int a[s.length()];
	for(int i = 0; i<s.length(); i++)
		a[i] = s[i]-'0';
	map<int,int>m;
	ll ans =0, rem = 0,ten=1;
	for(int i= s.length()-1;i>=0; i--)
	{
		rem = (ten*a[i]+rem)%2019;
		ten = ten*10%2019;
		m[rem]++;
	}
	ans = 0;
	for(auto i:m)
	{
		int y = i.second;
		if(i.first==0)
			ans += (y*(y+1))/2;
		else
			ans += (y*(y-1))/2;
	}
	cout<<ans<<endl;
	return 0;
}
