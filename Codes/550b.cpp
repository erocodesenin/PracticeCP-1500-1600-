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
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	// freopen("input.txt", "r", stdin);  
	int n,l,r,x;
	cin >> n >> l >> r >> x;
	int arr[n];
	for(int i=0;i<n;i++)
		cin >> arr[i];
	int ans=0;
	for(int i=0;i<(1<<n);i++)
	{
		int mn=1e9,mx=-1e9,sum=0,co=0;
		for(int j=0;j<n;j++)
		{
			if((i&(1<<j))!=0)
			{
				// cout << j << " ";
				mn=min(arr[j],mn);
				mx=max(arr[j],mx);
				sum+=arr[j];
				co++;
			}
		}
		// cout << "\n";
		// cout << sum << " " << mx  << " " << mn << " "  << co<< "\n";
		if(sum>=l&&sum<=r&&(mx-mn)>=x&&co>=2)
			ans++;
	}
	cout << ans;
}