//Interesting problem!!Floyd-Warshall with same complexity as worst case complexity of this one gives TLE.
//BFS on all the vertex solves it.
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
	vector<int> v[n];
	for(int i =0; i<n; i++)
		for(int j = 0; j<n; j++)
		{
			int h;
			cin>>h;
			if(h)
				v[i].push_back(j);
		}

	for(int i = 0; i<n;i++)
	{
		queue<int> q;
		q.push(i);
		int ans = 0;
		vector<bool> g(n);
		int flag = 1;
		g[i] = 1;
		while(!q.empty() && flag)
		{
			int y1 = q.size();
			ans++;
			while(y1-- && flag)
			{
				int y = q.front();
				q.pop();
				for(auto it:v[y])
				{
					if(!g[it])
					{
						g[it] = 1;
						q.push(it);
					}
					if(it==i)
						flag = 0;
				}
			}
		}
		if(!flag)
			cout<<ans<<'\n';
		else
			cout<<"NO WAY"<<'\n';
	}
	return 0;
}
