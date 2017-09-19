#include <stdio.h>
int main()
{
	int number,a, range[100];
	printf("몇 번 입력?:");
	scanf("%d",&number);

	for(a=0; a<number; ++a)
	{
		printf("숫자입력 %d:",a+1);
		scanf("%d",&range[a]);
	}

	for(a=1; a<number; ++a)
	{
		if(range[0] < range[a])
		{
			range[0] = range[a];
		}
	}

	for(a=1; a<number; ++a)
	{
		if(range[0] > range[a] && range[1] < range[a])
		{
			range[1] = range[a];
		}
	}

	printf("가장 큰 수 = %d\n",range[0]);
	printf("두번째 큰 수 = %d\n",range[1]);
	return 0;
}