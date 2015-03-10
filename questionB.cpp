#include<cstdio>
int main()
{
	int n;
	while(scanf("%d", &n)==1)
	{
		printf("%d ", n);
		while(n!=1)
		{
			if(n%2==1)
				n=3*n+1;
			else
				n=n/2;
			printf("%d ", n);
		}
	printf("\n");
	}
	return 0;
}
