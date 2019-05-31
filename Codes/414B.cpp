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
int dp[2005][2005];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	// freopen("input.txt", "r", stdin);  
	int n,k;
	cin >> n >> k;
	for(int i=1;i<=k;i++)
		for(int j=1;j<=n;j++)
			dp[i][j]=1;
	for(int i=2;i<=k;i++)
	{
		for(int j=2;j<=n;j++)
		{
			for(int w=j;w<=n;w+=j)
			{
				dp[i][j]=(dp[i][j]+dp[i-1][w])%1000000007;
			}
		}
	}
	int ans=0;
	for(int i=0;i<=n;i++)
	{
		ans=(ans+dp[k][i])%1000000007;
	}
	cout << ans;
}