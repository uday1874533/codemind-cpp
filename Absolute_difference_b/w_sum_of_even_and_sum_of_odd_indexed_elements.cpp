#include <stdio.h>
#include <math.h>
int main()
{
	int n;
	scanf("%d", &n);
	int arr[n];
	int i,sum1=0,sum2=0;
	for(i=0; i<n; i++) 
	{
		scanf("%d", &arr[i]); 
	}
	for(i=0;i<n;i++)
	{
		if(i%2==0)
		{
			sum1+=arr[i];
		}
		else
		{
			sum2+=arr[i];
		}
	}
	printf("%d",abs(sum1-sum2));
}



