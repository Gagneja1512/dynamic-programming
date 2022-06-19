#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;

	vector<int> arr;
	for(int i=0 ; i<n ; i++)
	{
		int x;
		cin>>x;

		arr.push_back(x);
	}
    

	//TABULATION METHOD (TC = O(n) and SC = O(n)) 

	/*vector<int> dp(n , 0) ;
	dp[0] = arr[0] ;
	for(int i=1 ; i<n ; i++)
	{	
		int include ;
		int exclude ;
		if(i-2<0)
		{
			include = arr[i];
			exclude = dp[i-1] ;
		}
		else
		{
			include = dp[i-2] + arr[i] ;
			exclude = dp[i-1] ;
		}

		dp[i] = max(include , exclude) ;
	}
	cout<<dp[n-1]<<endl;*/

	//SPACE OPTIMISATION(TC = O(n) and SC=0(1))
	int prev_2 = 0 ;
	int prev_1 = arr[0] ;

	for(int i=1 ; i<n ; i++)
	{
		int include = prev_2 + arr[i] ;
		int exclude = prev_1 + 0 ;

		int ans = max(include , exclude) ;
		prev_2 = prev_1;
		prev_1 = ans ;
	}

	cout<<prev_1<<endl;
	return 0;
}