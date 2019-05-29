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
lld dp[100005];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	// freopen("input.txt", "r", stdin);  
	int n;
	cin >> n;
	lld arr[n];
	map <lld,lld> m;
	for(int i=0;i<n;i++)
	{
		cin >> arr[i];
		m[arr[i]]++;
	}
	dp[0]=0;
	dp[1]=m[1];
	for(int i=2;i<=100000;i++)
	{
		dp[i]=max(dp[i-1],dp[i-2]+m[i]*i);/*either picking the i-1th element will give more points, or picking the ith element
										 and deleting the i-1th will gice more points*/
	}
	cout << dp[100000];
}