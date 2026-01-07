#include <stdio.h>

int main() {
    int score = 0;
    char answer;

    printf("=== Welcome to the Quiz Game ===\n\n");

    // Question 1
    printf("1. What is the capital of Nepal?\n");
    printf("a) Pokhara\nb) Kathmandu\nc) Lalitpur\nd) Bhaktapur\n");
    printf("Your answer: ");
    scanf(" %c", &answer);

    if(answer == 'b' || answer == 'B') {
        score++;
    }

    // Question 2
    printf("\n2. Which language is used for system programming?\n");
    printf("a) Python\nb) Java\nc) C\nd) HTML\n");
    printf("Your answer: ");
    scanf(" %c", &answer);

    if(answer == 'c' || answer == 'C') {
        score++;
    }

    // Question 3
    printf("\n3. What does CPU stand for?\n");
    printf("a) Central Processing Unit\nb) Computer Power Unit\nc) Control Processing Unit\nd) Central Program Unit\n");
    printf("Your answer: ");
    scanf(" %c", &answer);

    if(answer == 'a' || answer == 'A') {
        score++;
    }

    printf("\n=== Quiz Finished ===\n");
    printf("Your Score: %d/3\n", score);

    if(score == 3)
        printf("Excellent! \n");
    else if(score == 2)
        printf("Good job \n");
    else
        printf("Keep practicing \n");

    return 0;
}
