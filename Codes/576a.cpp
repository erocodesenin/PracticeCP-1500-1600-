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
int a[1005];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	// freopen("input.txt", "r", stdin);  
	int n;
	cin >> n;
	vector <int> v;
	int co=0;
	// memset(a,0,sizeof(a));
	for(int i=2;i<=n;i++)
	{
		// cout << i << " " 
		if(a[i]==0)
		{
			for(int j=i;j<=n;j+=i)
			{
				if(j!=i)
					a[j]=1;
			}
		}
	}
	set <int> s;
	// cout << co << "\n";
	for(int i=2;i<=n;i++)
	{
		// cout << i <<" " << a[i]<<"\n";
		if(a[i]==0)
		{
			for(int j=1;pow(i,j)<=n;j++)
				s.insert(pow(i,j));
		}
	}
	cout << s.size() << "\n";
	for(int i:s)
	{
		cout << i << " ";
	}
}