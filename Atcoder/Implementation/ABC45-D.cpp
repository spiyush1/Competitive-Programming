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
	ll h,w,n;
	cin>>h>>w>>n;
	set<ar(2)> st;
	set<ar(2)> s;
	ll ans [10]={0};
	ans [0]= (h-2)*(w-2);
	for(int i = 0; i<n; i++)
	{
		int a,b;
		cin>>a>>b, --a,--b;
		st.insert({a,b});
		for(int j =0; j<3; j++)
			for(int k =0; k<3; k++)
			{
				int x = a-j;
				int y = b-k;
				if(x<0 || y<0 || x+3>h || y+3>w)continue;
				s.insert({x,y});
			}
	}
	for(auto it: s)
	{
		int cnt =0;
		for(int i =0; i<3; i++)
			for(int  j =0; j<3; j++)
			{
				int x = it[0]+i;
				int y = it[1]+j;
				if(st.count({x,y}))cnt++;
			}
		ans[0]--;
		ans[cnt]++;
	}
	for(int i =0; i<10; i++)
		cout<<ans[i]<<endl;
	return 0;
}
