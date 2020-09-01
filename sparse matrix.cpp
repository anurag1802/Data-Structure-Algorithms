/* Sparse matrix */
#include <iostream>
#define row 4
#define col 3
using namespace std;
int isSparse(int A[row][col])
{
	int i,j,count=0;
	for (i=0; i<row; ++i)
	{
		for(j=0; j<col; ++j)
		{
			if (A[i][j]==0)
			{
				count++;
			}
		}
	}
	if (count>=(row*col)/2)
	{
		return 0;
	} 
	else return -1;
}
int main()
{
	int s[row][col]={0,5,0,0,0,8,0,0,0,1,0,0},status;
	status = isSparse(s);
	if(status==-1) 
	{
		cout<<"Not a Sparse Matrix";
   	}
   	else
   	{
   		cout<<"Is a Sparse Marix";
	}
	return 0;
}

