#include <bits/stdc++.h>
using namespace std;
int fact(int n)
	{
		if(n<=1) return 1;
		else return(n*fact(n-1));
	}

int main()
{
	//your code goes here 
	int fact(int);
	int n, ans, x=5;
	ans=fact(x);
	cout<<"Factorial of "<< x <<" is "<<ans;
}

