#include <iostream>
#include "myLinkedList.h"
using namespace std;
const int MAX_SIZE = 1000;
const int MIN_SIZE = 1;

struct empType
{
	int ID;
	double Score;
};

int insertionSort(empType A[], int first, int last)
{
	int unsorted, loc, count;
	count=0;
	
	
	for (unsorted=first; unsorted < last; unsorted++)
	{
		empType nextItem = A[unsorted];
		loc = unsorted;
		while ((loc>0) && (A[loc-1].ID>nextItem.ID))
		{
			A[loc]=A[loc-1];
			loc--;
			count++;
		}
		A[loc]=nextItem;
	}
	return count;
}