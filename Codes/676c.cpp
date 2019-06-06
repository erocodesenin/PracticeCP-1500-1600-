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
	int n,k;
	string s;
	cin >> n >> k;
	cin >> s;
	int l=0;
	unordered_map <char,int> m;
	int ans=0;
	for(int i=0;i<n;i++)
	{
		m[s[i]]++;
		if(min(m['a'],m['b'])<=k)
		{
			ans++;
		}
		else
		{
			m[s[l]]--;
			l++;
		}
	}
	cout << ans;
}