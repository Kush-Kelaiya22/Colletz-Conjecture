#include <stdio.h>
#include <conio.h>

int main()
{
	unsigned long long int num;
	unsigned long long int max;
	unsigned long long int steps;

	printf("Give a natural number~> ");
	scanf("%llu", &num);
	max = num;
	while (num != 1)
	{
		steps++;
		if ((num & 0b0001) == 1)
			num = (num * 3) + 1;
		else
			num = num / 2;
		if (num > max)
			max = num;
		printf("%llu\n", num);
	}
	printf("Peak number reacher : %llu\n", max);
	printf("Steps taken : %llu\n", steps);
	printf("Press any key to continue...");
	getch();

	return 0;
}