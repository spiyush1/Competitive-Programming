// To be updated with another solution after learning lca to find path between two nodes in a tree

#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long int
#define ar array
#define mp make_pair
using namespace std;

void BFS(vector<int> *v, int x, int y)
{
	int color[y+1]= {0};
	color[x] = 1;
	color[y] = 2;
	queue<int> q;
	q.push(x);
	q.push(y);
	while(!q.empty())
	{
		int y = q.front();
		q.pop();
		for(int i:v[y])
			if(!color[i])
			{
				color[i] = color[y];
				q.push(i);
			}
	}

	int white= 0, black=0;
	for(int i :color)
		if(i==1) black++;
		else white++;
		white--;
	if(black>white) cout<<"Fennec"<<endl;
	else cout<<"Snuke"<<endl;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin>>n;
	vector<int> v[n+1], stack;
	for(int i = 0 ,j,k; i<n-1; i++)
	{
		cin>>j>>k;
		v[k].push_back(j);
		v[j].push_back(k);
	}
	bool vis[n+1];
	memset(vis,false,sizeof(vis));
	// DFS(v,vis,1,n,stack);
	BFS(v,1,n);
	return 0;
}
