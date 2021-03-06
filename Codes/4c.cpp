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
	int n;
	cin >> n;
	unordered_map <string,int> m;/*orderedmap - 310 ms ordered map - 186 ms*/
	for(int i=0;i<n;i++)								
	{
		string temp;
		cin >> temp;
		if(m[temp]==0)
		{
			cout << "OK" << "\n";
			m[temp]++;
		}
		else
		{
			cout << temp << m[temp] << "\n";
			m[temp]++;
		}
	}
}