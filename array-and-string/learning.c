#include <stdio.h>

int main()
{
    char numbers[4] = { 'a' };
    numbers[0] = 'A';
    numbers[1] = 'l';
    numbers[2] = 'i';
    numbers[3] = '\0';

    printf("this is char: %c %c %c %c\n",
            numbers[0], numbers[1], numbers[2], numbers[3]);

    printf("this is string: %s\n", numbers);
            
    char string_attempt[6] = "alicia";

    printf("Hi, my name is %s\n", string_attempt);

    string_attempt[5] = 'o';
    printf("Now, my name is %s\n", string_attempt);
    
    char *another = "alicio & kevin";

    printf("Hi, this is my another name %s\n", another);
    
    printf("Index 5th in another: %c\n", another[5]);

    printf("Index 6th in another: e%ck\n", another[6]);
    
    
    return 0;
}