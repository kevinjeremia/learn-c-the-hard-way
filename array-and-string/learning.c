#include <stdio.h>

int main()
{
    char alphabet[3] = {'a','b','c'};
    printf("Tell me the first 3 alphabet please: %c %c %c\n", alphabet[0], alphabet[1], alphabet[2]);
    
    int num[3] = {1,2,3};
    printf("this is one: %d\n", num[0]);
    printf("this is two: %d\n", num[1]);
    printf("this is three: %d\n", num[2]);
    char string_attempt[6] = "alicia";

    printf("Hi, my name is %s\n", string_attempt);

    string_attempt[5] = 'o';
    printf("Now, my name is %s\n", string_attempt);
    
    char *another = "alicio";

    printf("Hi, this is my another name %s\n", another);
    char *stratt = &string_attempt[5];

    printf("Index 5th in another: %c\n", another[5]);
    printf("Value of pointer another %p\n", (void *)another);
    printf("Value of pointer stratt %p\n", (void *)stratt);
    
    return 0;
}