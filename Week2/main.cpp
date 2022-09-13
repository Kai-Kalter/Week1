#include <stdio.h>

int main(void)
{
	float intrest;
	float principal = 1;
	float rate;
	int days;

	while (principal != -1)
	{
		printf("enter loan principal (-1 to end):");
		scanf_s("%f", &principal);
		if (principal >= 0)
		{
			printf("enter intrest rate:");
			scanf_s("%f", &rate);
			printf("enter term of the loan in days:");
			scanf_s("%d", &days);

			intrest = principal * rate * days / 365;
			printf("the intrest charge is %.2f\n\n", intrest);

		}
		else if (principal != -1 && principal <= 0) {
			printf("please enter a number above 0\n");
			principal = 1;
		}
	}

	return 0;
}