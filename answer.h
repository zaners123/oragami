#include <stdio.h>

void answer(int Q1, int Q2, int Q3, int Q4) {

	int score = Q1+Q2+Q3+Q4;
	if (score > 5) {
		printf("Learn about the WSU community!");
	}

	if (Q1==1 && Q2==2 && Q3==3) {
		printf("You could spread awareness through compassion!");
	}
}