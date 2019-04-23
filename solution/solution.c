#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Create two global vars
char * global_hello;
char * global_world;

void set_hello() {
  // Store hello
  #define HELLO "Hello"
  char * hello = strcpy(malloc(sizeof HELLO), HELLO);
  global_hello = hello;
}
void set_world_and_print_both() {
  // Store world
  #define WORLD "World"
  char * world = strcpy(malloc(sizeof WORLD), WORLD);
  global_world = world;

  // Print all
  puts(global_hello);
  puts(global_world);
}

int main() {
  set_hello();
  set_world_and_print_both();
  return 0;
}
