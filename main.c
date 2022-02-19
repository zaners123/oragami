// TEAMNAME Team Oragami
#include <stdio.h>
#include "Q1.h"
#include "Q2.h"
#include "Q3.h"
#include "Q4.h"
#include "answer.h"

int main() {
	printf("Hello! Welcome to Team Oragami!\n");
	printf("We are going to spread awareness\n");
	printf("Answer these questions to find out the best way you could spread WSU awareness!\n");
	printf("Question 1: Which word most describes you?\n");
	printf("1. Volatile\n");
	printf("2. Private\n");
	printf("3. Protected\n");
	printf("4. Public\n");
	int q1;
	scanf("%d",&q1);

	int q2 = Q2();
	int q3 = Q3();
	int q4 = Q4();

	answer(q1,q2,q3,q4);

	return 0;
}
