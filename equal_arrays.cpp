#include<bits/stdc++.h>
using namespace std;

bool isequal(int A[],int B[],int lenA,int lenB)
{
	if(lenA!=lenB)
	{
		return false;
	}
	
	sort(A,A+lenA);
	sort(B,B+lenB);
	int i;
	for(i=0;i<lenA;i++)
	{
		if(A[i]!=B[i])
		{
			return false;
		}
		/*else
		{
			return true;
		}*/
	}
}

int main()
{
	int A[]={1,3,2,5,4};
	int B[]={2,4,5,1,3};
	int lenA=sizeof(A)/sizeof(int);
	int lenB=sizeof(B)/sizeof(int);
	
	if(isequal(A,B,lenA,lenB))
	{
		cout<<"\n Arrays are equal";
		
	}
	else
	{
		cout<<"\n Arrays are not equal";
	}
return 0;
}
