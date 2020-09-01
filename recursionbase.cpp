#include<iostream>
#include<math.h>
using namespace std;
int pow(int b, int e)
{
	if(e<=0) return 1;
	else return (b * pow(b,e-1));
}

int main()
{
	int pow(int, int);
	int b=2, e=5,ans;
	ans=pow(b,e);
	cout<<"answer of "<<b<<" to the power "<<e<<" is "<<ans;
}
