#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n ;
	cin>>n;

	vector<int> coin ;
	for(int i=0 ; i<n ; i++)
	{
		int x;
		cin>>x;
		coin.push_back(x);
	}

	int x ;
	cin>>x;

	vector<int> dp(x+1 , INT_MAX);
	dp[0] = 0;
	for(int i=1 ; i<=x ; i++)
	{
		for(int j=0 ; j<n ; j++)
		{   
			if((i-coin[j])>=0 and dp[i-coin[j]] != INT_MAX)
				dp[i] = min(dp[i] , 1 + dp[i-coin[j]]) ;
		}
	}

	if(dp[x] == INT_MAX)
		cout<<-1<<endl;
	else
		cout<<dp[x]<<endl;

	return 0;		
}