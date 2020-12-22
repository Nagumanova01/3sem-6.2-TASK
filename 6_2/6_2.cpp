#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

vector<string> F(int n, vector<int> a) 
{
	int i = 0;
	set<int> q;
	vector<string> ans;
	while (i < n) 
	{
		if (q.count(a[i]) != 0) 
		{
			cout << "YES" << endl;
			ans.push_back("YES");
		}
		else 
		{
			cout << "NO" << endl;
			ans.push_back("NO");
		}
		q.insert(a[i]);
		i++;
	}
	return ans;
}

int main()
{
	int n;
	cin >> n;
	vector<int> A(n);
	for (int i = 0; i < n; i++)
		cin >> A[i];
	F(n, A);
}

