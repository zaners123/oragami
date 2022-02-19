//
// Created by Randall on 2/19/2022.
//

#ifndef ORAGAMI_Q5_H
#define ORAGAMI_Q5_H

#include <stdio.h>

int Q5 ()
{
    choice = 0;

    printf("Choose your favorite word from the choices below\n\n "
           "1. Queue\n"
           "2. Kakorrhaphiophobia\n"
           "3. Lollygag\n"
           "4. Moist\n"
           "5. Cattywampus\n");

    scanf("%d", choice);

    return choice;
}

#endif //ORAGAMI_Q5_H
