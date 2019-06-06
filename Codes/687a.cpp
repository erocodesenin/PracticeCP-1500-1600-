#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <numeric>
#include <vector>
#include <set>
#include <map>
#include <cstring>
#include <unordered_map>
#define lld long long int
#define DBG1(vari1) cerr<<#vari1<<" = "<<(vari1)<<endl;
#define DBG2(vari1,vari2) cerr<<#vari1<<" = "<<(vari1)<<" "<<#vari2<<" = "<<(vari2)<<endl;
#define DBG3(vari1,vari2,vari3) cerr<<#vari1<<" = "<<(vari1)<<" "<<#vari2<<" = "<<(vari2)<<" "<<#vari3<<" = "<<(vari3)<<endl;
using namespace std;
vector <int> adj[100005];
vector <int> gr[2];
int vis[100005];
bool dfs(int s, int c)
{
	vis[s] = c;
	gr[c-1].push_back(s);
	for(int i:adj[s])
	{
		if(!vis[i] && dfs(i,3-c))
			return 1;
		if(vis[i]!=3-c)
			return 1;
	}
	return 0;
}
int main()
{
	/*To check bipartition use this dfs*/
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	// freopen("input.txt", "r", stdin);  
	int n,m;
	cin >> n >> m;
	for(int i=0;i<m;i++)
	{
		int a,b;
		cin >> a >> b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	for(int i=1;i<=n;i++)
	{
		if(!vis[i])
		{
			if(dfs(i,2))
			{
				cout << "-1" << "\n";
				return 0;
			}
		}
	}
	for(int i=0;i<2;i++)
	{
		cout << gr[i].size() << "\n";
		for(int a:gr[i])
			cout << a << " ";
		cout << "\n";
	}
}