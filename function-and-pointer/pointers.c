#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    char *names[] = {"LeBron James", "Michael Jordan", "Kevin Jeremia", "Kyrie Irving"};
    int ages[] = {38, 60, 20, 31};

    int count = sizeof(ages)/sizeof(ages[0]);

    int i = 0;

    // For loop with pointer
    char **curr_names = names; // points to array named names
    int *curr_ages = ages; // points to array named names

    printf("pointer: %p and %p\n", curr_names, curr_ages);

    for (i = 0; i < count; i++) {
        printf("I'm %s and I'm %d years old\n", *(curr_names+i), *(curr_ages+i));
    }

    printf("-----\n");

    // similar to an array

    for (i = 0; i < count; i++) {
        printf("I'm %s and I'm %d years old\n", curr_names[i], curr_ages[i]);
    }

    printf("------\n");

    for (i = 0; i < count; i++) {
        printf("Hello again, I'm %s and I'm %d years old\n", *(curr_names+i), *(curr_ages+i));
    }

    // rewrite array as pointer

    int *new_ages = malloc(sizeof(ages[0]) * 5);
    if (new_ages == NULL) {
        printf("Age is an empty array");
    }
    new_ages[0] = 10;
    new_ages[1] = 15;
    new_ages[2] = 20;
    new_ages[3] = 25;
    new_ages[4] = 4;

    for (i = 0; i < count; i++) {
        printf("This is new ages %d\n", new_ages[i]);
        printf("Pointer print This is new ages %d\n------\n", *(new_ages+i));
    }

    free(new_ages);

    printf("This is command line argument: %s\n", *(argv+1));
}