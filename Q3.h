

#ifndef ORAGAMI_Q3_H
#define ORAGAMI_Q3_H

int Q3()
{
    printf("Testing!");

    int choice = 0;

    printf("How will you spend your Saturday night?\n\n"
           "1. Coding at the hackathon\n"
           "2. Finishing homework just before the 11:59PM deadline\n "
           "3. Drinks at the bar with friends\n"
           "4. All-night gaming tournament\n"
           "5. House Party!\n");

    scanf("%d", int choice);

	return choice;
}

#endif // ORAGAMI_Q3_H
