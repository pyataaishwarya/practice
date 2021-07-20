#include<stdio.h>
#define SIZE 50
int main()
{
	int a[SIZE],i,j,n,temp;
	printf("enter number of elements:");
	scanf("%d",&n);
	printf("enter array elements:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("elements before sorting:\n");
	for(i=0;i<n;i++)
		printf("%d\n",a[i]);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("array elements after sorting:\n");
	for(i=0;i<n;i++)
		printf("%d\n",a[i]);
}

