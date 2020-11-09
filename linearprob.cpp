/*linear probing*/
#include<iostream>
#define dataSize 10 /*total number of data*/
#define hashTableSize 10 /*size of hashtable*/
using namespace std;

/*hash function to locate data*/
int hashFunction(int k)
{
	return (2*k+3)%hashTableSize;
}

/* main function */
int main()
{
	int data[dataSize]={3,2,9,6,11,13,7,12,70,80};
	int hashTable[hashTableSize],i,position,probes[hashTableSize],counter,elementsInHashTable=1;
	
	/*set -1 to indicate that cell is empty*/
	for(i=0;i<hashTableSize;++i)hashTable[i]=-1;
	
	/*process each data one by one*/
	for(i=0;i<dataSize;++i)
	{
		cout<<"i="<<i;
		cout<<"\tdata["<<i<<"]="<<data[i];
		position=hashFunction(data[i]);
		cout<<"\tposition given by function ="<<position;
		counter=1;
		while(hashTable[position]!=-1)
		{
			position++;
			position=position%hashTableSize;
			counter++;
		}
		cout<<"\tposition incremented after collision ="<<position;
		hashTable[position]=data[i];
		cout<<"\thashTable position ="<<hashTable[position]<<"\n";
		probes[position]=counter;
		elementsInHashTable++;
		if(elementsInHashTable>hashTableSize)
		{
			cout<<"\nhash table is full and hence can not process further "<<dataSize-hashTableSize<<" more data\n";
			break;
		}
		
	}
	/*display*/
	cout<<"status of hash table after mapping the data onto it\n";
	for(i=0;i<hashTableSize;++i)
	{
		cout<<"hashTable["<<i<<"]="<<hashTable[i]<<"=> Number of probes= "<<probes[i]<<endl;
	}
	return 0;
}


