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
	string s;
	cin >> s;
	int n=s.size();
	int a1=-1,b1=-2;
	int a2=-1,b2=-2;
	int fl=0;
	int fl2=0;
	for(int i=0;i<n-1;i++)
	{
		if(s[i]=='A'&&s[i+1]=='B')
		{
			fl=1;
			a1=i;
			b1=i+1;
			break;
		}
	}
	for(int i=0;i<n-1;i++)
	{
		if(s[i]=='B'&&s[i+1]=='A')
		{
			fl2=1;
			b2=i;
			a2=i+1;
		}
	}
	// if(s[0]='A'&&s[1]=='B'&&s[2]=='X')
	// 	cout << a1 << " " << b1 << " " << a2 << " " << b2<<"\n";
	if(b1!=b2&&a1!=a2&&fl==1&&fl2==1)
	{
		cout << "YES";
		return 0;
	}
	fl=0,fl2=0;
	a1=-1,b1=-2;
	a2=-1,b2=-2;
	for(int i=0;i<n-1;i++)
	{
		if(s[i]=='B'&&s[i+1]=='A')
		{
			fl=1;
			b1=i;
			a1=i+1;
			break;
		}
	}
	for(int i=0;i<n-1;i++)
	{
		if(s[i]=='A'&&s[i+1]=='B')
		{
			fl2=1;
			a2=i;
			b2=i+1;
		}
	}
	// if(s[0]='A'&&s[1]=='B'&&s[2]=='X')
		// cout << a1 << " " << b1 << " " << a2 << " " << b2<<"\n";
	
	if(b1!=b2&&a1!=a2&&fl==1&&fl2==1)
	{
		cout << "YES";
		return 0;
	}
	cout << "NO";
}