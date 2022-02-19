#include <stdio.h>

int Q3() {

    int choice = 0;

    printf("How will you spend your Saturday night?\n\n 1. Coding at the hackathon "
           "\n 2. Finishing homework just before the 11:59PM deadline\n "
           "3. Drinks at the bar with friends\n"
           "4. All-night gaming tournament\n"
           "5. House Party!");

    scanf("%d", int choice);

	return choice;
}