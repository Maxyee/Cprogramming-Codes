#include<stdio.h>

	int main()
	{
		int x;
		int *ptr_p;

        scanf("%d",x);

		ptr_p = &x;



		printf("%d\n", ptr_p);

		return 0;
	}
