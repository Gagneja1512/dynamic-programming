#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;

	vector<int> cost;
	for(int i=0 ; i<n ; i++)
	{
		int x ;
		cin>>x ;
		cost.push_back(x);
	}

	int prev_1 = cost[1];
	int prev_2 = cost[0];

	for(int i=2 ; i<n ; i++)
	{
		int curr = cost[i] + min(prev_1 , prev_2) ;
		prev_2 = prev_1 ;
		prev_1 = curr ;
	}

	cout<<min(prev_1 , prev_2)<<endl;
	return 0;
}

//time complexity = O(n)
//space complexity = O(1)