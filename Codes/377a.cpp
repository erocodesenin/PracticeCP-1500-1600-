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
int n,m,k;
char arr[505][505];
int vis[505][505];
void dfs(int x, int y)
{
	if(x<n&&y<m&&x>-1&&y>-1&&k>=0&&arr[x][y]=='.'&&vis[x][y]==0)
		vis[x][y]=1;
	else
		return ;
	// cout << x  << " " <<y << "\n";
	dfs(x+1,y);
	dfs(x-1,y);
	dfs(x,y+1);
	dfs(x,y-1);
	if(arr[x][y]=='.'&&k>0)
	{
		arr[x][y]='X';
		k--;
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	// freopen("input.txt", "r", stdin);  
	cin >> n >> m >> k;
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			cin >> arr[i][j];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(!vis[i][j]&&arr[i][j]=='.')
			{
				// cout << i << " " << j <<"\n";
				dfs(i,j);
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout << arr[i][j];
		}
		cout << "\n";
	}
}