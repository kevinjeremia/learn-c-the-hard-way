#include <stdio.h>
// Exercise 4-1 from K&R
/*  strindex will return the index of the rightmost searched
    in a string s, or -1 if there is none*/

int strindex(char source[], char searched[]);

int main()
{
    char text[] = "Kevin loves A";
    char find[] = "jo";

    int find_index = strindex(text, find);
    if (find_index == -1) {
        printf("There is no \"%s\" in \"%s\"", find, text);
    } else {
        printf("s in text[] is indexed at: %d\n", find_index);
    }
    
    return 0;
}

int strindex(char source[], char searched[])
{
    int i, j, k;
    for (i = 0; source[i] != '\0'; i++) {
        for (j = i, k = 0; searched[k] != '\0' && source[j] == searched[k]; j++, k++)
        {
        }

        if (searched[k] == '\0' && k > 0) {
            int rightmost_index = k-1+i;
            return rightmost_index;
        }
    }

    return -1;
}