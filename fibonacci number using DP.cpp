//This is fibonacci series using Dynamic Programming(Using Memoisation).

/*#include<bits/stdc++.h>
using namespace std;

int fibonacci(int n , vector<int> &dp)
{
	if(n==1 or n==0)
		return n ;

	if(dp[n] != -1)
		return dp[n] ;

	dp[n] = fibonacci(n-1 , dp) + fibonacci(n-2 , dp) ;
	return dp[n] ;		
}

int main()
{
	int n;
	cin>>n;

	vector<int> dp(n+1 , -1) ;
	cout<<fibonacci(n , dp)<<endl;

	return 0 ;
}*/
/*

	TIME COMPLEXITY = O(n)
	SPACE COMPLEXITY = O(n) + O(n) 
*/

//////////
//Using Tabulation
/*#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;

	//vector<int> dp(n+1) ;
	//dp[1] = 1;
	//dp[0] = 0 ;
	int prev_1 = 1;
	int prev_2 = 0;

	if(n==0)
	{
		cout<<prev_2<<endl;
		return 0 ;
	}

	for(int i=2 ; i<=n ; i++)
	{
		int curr = prev_1 + prev_2 ;
		prev_2 = prev_1 ;
		prev_1 = curr ;
	}

	cout<<prev_1<<endl;
	return 0 ;	
}*/

/*
	TIME COMPLEXITY = O(n)
	->SPACE COMPLEXITY = O(n) {IN DP ARRAY}
	->SPACE COMPLEXITY = O(1) {IN CURR SOLUTION}
*/
