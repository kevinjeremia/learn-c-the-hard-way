#include <stdio.h>

int main()
{
    char *name = "kevin";
    char alpha = 'a';
    char *test;

    test = &name[1];
    alpha = *test;
    printf("alpha = %c\n",alpha);
    printf("name = %s\n",name);
    
    printf("----Change e to o-----\n");
    printf("alpha = %s\n",name);
    printf("test will point to null");
    test = &name[4];
    printf("test = %c\n",*test);

    char changeable_name[] = "durant";
    char beta = 'b';
    char *exp;

    exp = &changeable_name[1];
    printf("\n------Before------\n");
    changeable_name[2] = *exp;
    printf("After: %s\n", changeable_name);
    exp--;
    printf("After exp decrement: %c\n", *exp);
    exp = &beta;
    printf("Before: %s\n", changeable_name);
    changeable_name[3] = *exp;
    printf("After: %s\n", changeable_name);
}