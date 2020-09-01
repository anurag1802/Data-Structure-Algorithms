#include<iostream>
#define row 4
#define col 3
#define max 10
using namespace std;
int main()
{
   int original[row][col]={0,5,0,0,0,8,0,0,0,1,0,0}, sparse[max][3];
   int i,j,count=0;
   for(i=0; i<row; ++i)
   {
   	for(j=0; j<col; ++j)
   	{
   	if(original[i][j]!=0) 
	   {
	   sparse[count][0]=i;
	   sparse[count][1]=j;
	   sparse[count][2]=original[i][j];
	   count++;
	   }
	}
   }
   for(i=0; i<count; ++i)
   {
   	cout<<"<"<<sparse[i][0]<<"\t"<<sparse[i][1]<<"\t"<<sparse[i][2]<<">"<<endl;
   }
   return 0;
}
