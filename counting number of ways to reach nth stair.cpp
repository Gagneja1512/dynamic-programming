//Given n number of stairs. You have to reach the nth stair and in each step you can jump one or two stair.Find total number of ways in whih you can reach the nth stair.

#include<bits/stdc++.h>
using namespace std;

int solve(int n , int i , vector<int> &dp)
{
	if(i == n)
		return 1;

	if(i > n)
		return 0 ;

	if(dp[i] != -1)
		return dp[i];	

	dp[i] = solve(n , i+1 , dp) + solve(n , i+2 , dp) ;
	return dp[i] ;	
}

int main()
{
	int n;
	cin>>n;

	vector<int> dp(n+1 , -1) ;
	int ans = solve(n , 0 , dp) ;
	cout<<ans<<endl;
	return 0;
}