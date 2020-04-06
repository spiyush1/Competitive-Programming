// The trick is to arrive at conclusion that "select and remove two cards"
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
	int n;
	cin>>n;
	set<int>s;
	for(int i = 0;i<n; i++)
	{
		int j;
		cin>>j;
		s.insert(j);
	}
	if(s.size()&1) cout<<s.size()<<endl;
	else cout<<s.size()-1<<endl;
	return 0;
}
