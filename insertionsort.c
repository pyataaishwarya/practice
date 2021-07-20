#include<stdio.h>
#define SIZE 50
int main()
{
	int a[SIZE],i,j,n,temp;
	printf("enter number of elements:\n");
	scanf("%d",&n);
	printf("enter array elements:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("array elements before insertionsort:\n");
	for(i=0;i<n;i++)
		printf("%d\n",a[i]);
	for(i=0i;i<=n-1;i++)
	{
		j=i;
		while(j>0 && a[j-1]>a[j])
		{
			temp=a[j];
			a[j]=a[j-1];
			a[j-1]=temp;
			j--;
		}
	}
	printf("after sorting:\n");
	for(i=0;i<n;i++)
		printf("%d\n",a[i]);
}
