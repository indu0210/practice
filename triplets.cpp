#include<iostream>
using namespace std;

int main()
{
	int arr[]={4,4,2,0,7,8,9,5,3,1};
	int sum=10;
	int i,j,k,c,n,find=0;
	
	n=sizeof(arr)/sizeof(arr[0]);
	
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			for(k=j+1;k<n;k++)
			{
				c=arr[i]+arr[j]+arr[k];
				if(c==sum)
				{
					cout<<"("<<arr[i]<<","<<arr[j]<<","<<arr[k]<<")";
					find=1;
				}
			}
		}
	}
	if(find==0)
	{
		cout<<"\n No triplet found";
	}
	return 0;
}
