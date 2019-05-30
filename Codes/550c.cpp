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
int dp[105];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	// freopen("input.txt", "r", stdin);
	string s;
	cin >> s;
	int n=s.size();
	if(n<=2)
	{
		if((s[0]-'0')%8==0)
		{
			cout <<"YES\n"<< s[0] ;
			return 0;
		}
		else if((s[1]-'0')%8==0&&n>=2)
		{
			cout <<"YES\n"<< s[1] ;
			return 0;
		}
		else if((s[0]-'0')*10+(s[1]-'0')%8==0&&n>=2)
		{

			cout << "YES\n" << s[0]<<s[1];
			return 0;
		}
		cout << "NO\n";
		return 0;
	}
	for(int i=0;i<n;i++)
	{
		int ans=(s[i]-'0');
		if(ans%8==0)
		{
			cout << "YES\n";
			cout << ans;
			return 0;
		}
		for(int j=i+1;j<n;j++)
		{
			int ans=(s[i]-'0')*10+(s[j]-'0');
			if(ans%8==0)
			{
				cout << "YES\n";
				cout << ans;
				return 0;
			}
			for(int k=j+1;k<n;k++)
			{
				int ans=(s[i]-'0')*100+(s[j]-'0')*10+(s[k]-'0');
				if(ans%8==0)
				{
					cout << "YES\n";
					cout << ans;
					return 0;
				}

			}
		}
	}
	cout << "NO\n";

}