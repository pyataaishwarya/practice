#include<stdio.h>
#define SIZE 20
int main()
{
	int a[SIZE],i,j,temp,pos,n;
	printf("enter number of elements:\n");
	scanf("%d",&n);
	printf("enter array elements:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("array elements before selection sort:\n");
	for(i=0;i<n;i++)
		printf("%d\n",a[i]);
	for(i=0;i<n-1;i++)
	{
		pos=i;
		for(j=i+1;j<n;j++)
		{
			if(a[pos]>a[j])
				pos=j;
		}
		if(pos!=i)
		{
			temp=a[i];
			a[i]=a[pos];
			a[pos]=temp;
		}
	}
	printf("array elements after sorting:\n");
	for(i=0;i<n;i++)
		printf("%d\n",a[i]);
}
