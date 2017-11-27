#include<stdio.h>

int main() {
  char name[30];

  printf("Welcome to Varrock. What's your name, adventurer?\n");

  scanf("%s", &name);

  printf("Beware of the Dark Wizards, %s.\n", name);

  // TODO: more gameplay

  return 0;

}
