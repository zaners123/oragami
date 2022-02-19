#include <stdio.h>

void answer(int Q1, int Q2, int Q3, int Q4) {

	int score = Q1+Q2+Q3+Q4;
    if (score < 5) {
        printf("You're doing great! You could spread awareness through compassion!");
    }
	else if (score < 8) {
		printf("Learn about the WSU community!");
	}
    else if (score < 12) {
        printf("Maybe try to get involved with some student sponsored clubs!");
    }
    else if (score < 16) {
        printf("Now would be a great time to seek out WSU mental health services!");
    }
    else{
        printf("Seek help immediately! Call 911!");
    }
}