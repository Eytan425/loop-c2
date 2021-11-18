#include <stdio.h>

int main() {
	int i;
	printf("Enter a password: \n");
	scanf_s("%d", &i);


	while (i != 2007)
	{
		printf("You did..... NOT GET IN!!! HOW CAN YOU FORGET THE CODE YOU MORON \n");
		scanf_s("%d", &i);
	}
	printf("You are in!!");
	return 0;

}
