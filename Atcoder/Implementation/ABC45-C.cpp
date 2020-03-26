#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long int
#define ar(n) array<int,n>
#define mp make_pair
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	string s;
	cin>>s;
	ll k =0;
	for(int i =0; i<pow(2,s.size()-1);i++)
	{
		string t =s;
		for(int j = s.size()-2; j>=0; j--)
		{
			if(i>>j & 1) t.insert(t.begin()+j+1,' ');
		}
		stringstream ss(t);
		ll x =0;
		while(ss>>x)
			k += x;
	}
	cout<<k<<endl;
	return 0;
}
