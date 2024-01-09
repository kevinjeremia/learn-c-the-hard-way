#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>


// struct is basically a collection of data types (variables) 
// that are stored in one block of memory, and you can access
// each variable independently (just like a simple class in java)
struct Person {
    char *name;
    int age;
    int height;
    int weight;
};

struct Person *Person_create(char *name, int age, int height,
        int weight)
{
    struct Person *who = malloc(sizeof(struct Person));
    assert(who != NULL);

    // strdup dupllicate copies the original string
    // to the memory it's allocated/created
    who->name = strdup(name); // like this. in java ?! this.name
    who->age = age;
    who->height = height;
    who->weight = weight;

    return who;
}

void Person_destroy(struct Person *who)
{
    assert(who != NULL);

    free(who->name); // return memory that i got from stdup
    free(who); // return memory from malloc
}

void Person_print(struct Person *who)
{
    printf("Name: %s\n", who->name);
    printf("Age: %d\n", who->age);
    printf("Height: %d\n", who->height);
    printf("Weight: %d\n", who->weight);
}


struct Gift {
        char *name;
        int quantity;
        int price;
};

int main()
{
    struct Person *joe = Person_create("Joe Alex", 32, 64, 140);
    struct Person *frank = Person_create("Frank Blank", 20, 72, 180);

    printf("Joe is at memory location %p:\n", joe);
    Person_print(joe);

    printf("Frank is at memory location %p:\n", frank);
    Person_print(frank);

    joe->age += 20;
    joe->height -= 2;
    joe->weight += 40;
    Person_print(joe);

    frank->age += 20;
    frank->weight += 20;
    Person_print(frank);

    Person_destroy(joe);
    Person_destroy(frank);

    struct Gift my_gift;
    my_gift.name = "laptop";
    my_gift.quantity = 1;
    my_gift.price = 1500;

    printf("She gave me %d %s yesterday.\nIt cost her $%d.\n", 
            my_gift.quantity,
            my_gift.name,
            my_gift.price);

    return 0;
}
