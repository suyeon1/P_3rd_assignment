#include <stdio.h>
int main()
{
	int number,a, range[100];
	printf("�� �� �Է�?:");
	scanf("%d",&number);

	for(a=0; a<number; ++a)
	{
		printf("�����Է� %d:",a+1);
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

	printf("���� ū �� = %d\n",range[0]);
	printf("�ι�° ū �� = %d\n",range[1]);
	return 0;
}