#include <stdio.h>
#include <stdlib.h>


/*
I want to make a simple function that receive structs as argument 
and print structs' value
*/

struct Player {
    char *sports;
    char *name;
    char *race;
    int age;
    int height;
    int weight;
};

struct Player *Create_player(char *sports, char *name, char *race, int age, int height, int weight) {
    struct Player *player = malloc(sizeof(struct Player));

    player->sports = sports;
    player->name = name;
    player->race = race;
    player->age = age;
    player->height = height;
    player->weight = weight;

    return player;
}

void print_player(struct Player *player);

typedef struct BassPlayer {
    char *name;
    int age;
} BassPlayer;

int main() {

    // create struct on the stack memory
    struct Player lebron;
    lebron.sports = "Basketball";
    lebron.name = "LeBron James";
    lebron.race = "African-American";
    lebron.age = 39;
    lebron.height = 206;
    lebron.weight = 103;
    print_player(&lebron);

    // Create struct on heap memory
    struct Player *malong = Create_player("Table tennis", "Ma Long", "Chinese", 35, 175, 70);
    print_player(malong);

    free(malong);

    BassPlayer jaco = {
        jaco.name = "Jaco Pastorius",
        jaco.age = 38
    };

    printf("My name is %s, and I'm %d years old\n", jaco.name, jaco.age);

    return 0;
}

void print_player(struct Player *player) {
    printf("Hi my name is %s, just turned %d years old, and I play %s for a living.\nI am %s descent.\nI am %d cm tall, and I weigh %d kg.\n",
    player->name,
    player->age,
    player->sports,
    (*player).race,
    (*player).height,
    (*player).weight);
}