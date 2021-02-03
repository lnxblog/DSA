#include <stdio.h>


int a[7]={6,5,78,12,3,2,1};

int main()
{
	int N=7,low,temp,i,j;

	for(i=0;i<N;i++)
	{
		low=i;

		for(int j=i+1;j<N;j++)
			{
				if (a[low]>a[j])low=j;
			}
		temp=a[i];
		a[i]=a[low];
		a[low]=temp;
	}

	for(i=0;i<7;i++)
	printf("%d ",a[i]);
}
