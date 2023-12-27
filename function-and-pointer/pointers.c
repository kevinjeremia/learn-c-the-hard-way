#include <stdio.h>

int main()
{
    char *names[] = {"LeBron James", "Michael Jordan", "Kevin Jeremia", "Kyrie Irving"};
    int ages[] = {38, 60, 20, 31};

    int count = sizeof(ages)/sizeof(int);

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
}