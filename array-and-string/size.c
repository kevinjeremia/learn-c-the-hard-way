#include <stdio.h>


int main()
{
    // It's about size of char and int

    char name[] = "Kevin"; // 1 char == 1 byte then name's size == 6 bytes
    printf("K's size: %ld\nname's size is: %ld\n", sizeof(name[0]), sizeof(name));

    char alphabet = 'e';
    printf("size of one char %ld\n", sizeof(alphabet)); // Proof

    int result[] = {20, 30, 50, 60}; // 1 int in array == 4 byte
    printf("int's size: %ld\nresult's size is: %ld\n", sizeof(result[0]), sizeof(result));

    result[0] = 100;
    printf("new result[0]'s size: %ld\n", sizeof(result[0]));

    // comparing pre-decrement and post-decrement
    int num_one = 1;
    int num_two = 10;
    int pre = num_one + ++num_two; // num_two will be incremented before evaluate the expression
    printf("%d | pre: %d\n", num_two, pre); 

    int num_three = 1;
    int num_four = 10;
    int post = num_three + num_four++; // num_four will be incremented after evaluate the expression
    printf("%d | post: %d\n", num_four, post);
    
    return 0;
}