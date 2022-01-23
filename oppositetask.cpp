#include<bits/stdc++.h>
using namespace std;
int main()
{
	int test_case,a,b,idx,sum;
	cin>>test_case;
	for(idx=1;idx<=test_case;idx++)
	{
		cin>>sum;
		a = sum/2;
		b = sum-a;		
		cout<<a<<" "<<b<<endl;
	}
	return 0;
}