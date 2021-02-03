#include <stdio.h>


int a[6]={6,5,8,12,3,2,1};

void merge(int l,int m,int h)
{
	int c[h-l];
	int l1,l2,h1,h2;
	int i1,i2,k=0;
	i1=l;i2=m+1;h1=m;h2=h;
	
	while( i1<=h1 && i2<=h2 )
	{
		if (a[i1] < a[i2])
		{
			c[k++]=a[i1++];
		}
		else
			c[k++]=a[i2++];
	}
	#if 1
	for(;i1<=h1;i1++)
		c[k++]=a[i1];
	
	for(;i2<=h2;i2++)
		c[k++]=a[i2];
	#endif
	for(k=0;k<=h-l;k++)
		a[l+k]=c[k];
}

merge_sort(int l,int h)
{
	int mid;
	if(l<h)
	{
		mid=(l+h)/2;
		merge_sort(l,mid);
		merge_sort(mid+1,h);

		merge(l,mid,h);
	}

}



int main()
{


	int l=0,h=6,i;


	merge_sort(l,h);
	for(i=0;i<7;i++)
	printf("%d ",a[i]);

}
