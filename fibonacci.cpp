//write a program to write a fibonacci series
#include<bits/stdc++.h>
using namespace std;
int fibo(int t1,int t2,int totalterm)
{
	cout<<t1+t2<<setw(6);
	if(totalterm<=1) return 1;
	else (fibo(t2,t1+t2,totalterm-1));
}

int main()
{
	void fibo(int, int, int);
	fibo(1,0,5);
}
