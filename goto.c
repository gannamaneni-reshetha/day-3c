#include<stdio.h>
int main()
{
	long long int n,r,sum=0;
	printf("enter the number");
	scanf("%11d",&n);
	a:
		while(n!=0)
		{
			r=n%10;
			sum=sum+r;
			n=n/10;
		}
		if(sum>9)
		{
			n=sum;
			sum=0;
			goto a;
		}
		printf("%11d",sum);
		return 0;
}
