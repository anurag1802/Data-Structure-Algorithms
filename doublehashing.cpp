/*double hashing*/
#include<iostream>
#define datasize 10 /*total number of data*/
#define hashtablesize 10  /*size of hash table*/
using namespace std;

/*hash functions*/
int hashfunction1(int k)
{
	return (2*k*k+3*k-5)%hashtablesize;
}
int hashfunction2(int k)
{
	return (3*k*k-4*k+9)%hashtablesize;
}


/*hashtablesize=>datasize*/
int main()
{
	int data[datasize]={3,2,9,6,11,14,8,12,70,80};
	int hashtable[hashtablesize],i,location1,location2,position,probes[hashtablesize],counter,elementsInhashtable=1;
	
	/*set -1 to indicate particular cell is empty*/
	for(i=0; i<hashtablesize; ++i)hashtable[i]=-1;
	
	
	for(i=0;i<datasize;++i)
	{
		cout<<"i="<<i;
		cout<<"\tdata["<<i<<"]="<<data[i];
		location1=hashfunction1(data[i]);
		location2=hashfunction2(data[i]);
		cout<<"\tposition given by the function ="<<location1;
		counter=0;
		while(hashtable[(location1+location2*counter)%hashtablesize]!=-1)
		{
			counter++;
		}
		position=(location1+location2*counter)%hashtablesize;
		cout<<"\tposition modified after collision="<<position;
		hashtable[position]=data[i];
		cout<<"\thashtable["<<position<<"]="<<hashtable[position]<<"\n";
		probes[position]=counter+1;
		elementsInhashtable++;
		if(elementsInhashtable>hashtablesize)
		{
			cout<<"\nhash table is full and hence cannot process further "<<datasize-hashtablesize<<" more data\n";
			break;
		}
	}
	/*display*/
	cout<<"status of hash table after mapping the data onto it\n";
	for(i=0;i<hashtablesize;++i)
	{
		cout<<"hashtable["<<i<<"]="<<hashtable[i]<<"number of probes=>"<<probes[i]<<endl;
	}
	return 0;
}

