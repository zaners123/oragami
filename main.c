 /*
  * Authors: Randall Dickinson, Nathaniel Warner, Zane Chalich, Chris Vidal.
  * Team Name: Team Oragami
  */

#include <stdio.h>
#include "Q1.h"
#include "Q2.h"
#include "Q3.h"
#include "Q4.h"
#include "Q5.h"
#include "answer.h"

int main()
{

    int q1 = 0, q2 = 0, q3 = 0, q4 = 0, q5 = 0, path = 0;

	printf("Hello! Welcome to Team Oragami!\n");
	printf("We are going to spread awareness\n");
	printf("Answer these questions to find out the best way you could spread WSU awareness!\n");

	int q1 = Q1();
	int q2 = Q2();
	int q3 = Q3();
	int q4 = Q4();
    int q5 = Q5();

	path = (Q1 + Q2 + Q3 + Q4 + Q5) % 5;

    switch (answer)
    {
        case 0: printf("");
        break;
        case 1: printf("");
        break;
        case 2: printf("");
        case 3: printf("");
        break;
        case 4: printf("");
        break;

    }

	return 0;
}
