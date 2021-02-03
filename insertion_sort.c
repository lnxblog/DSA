#include <stdio.h>


int a[7]={6,5,78,12,3,2,1};

int main()
{
	int N=7,new,i,j,k;
	
	for(i=1;i<N;i++)
	{
		new=a[i];
		printf("inserting %d\n",new);
		for(j=i-1;j>=0;j--)
		{
			printf("comparing %d and %d\n",a[j],a[j+1]);
			if (a[j]>new)
				a[j+1]=a[j];
			else break;
		}
		a[j+1]=new;
		for(k=0;k<7;k++)
		printf("%d ",a[k]);
		printf("\n\n");
	}

	for(i=0;i<7;i++)
	printf("%d ",a[i]);
}
