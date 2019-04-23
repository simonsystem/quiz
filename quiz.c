#include <stdio.h>

// Create two global vars
char * global_hello;
char * global_world;

void set_hello() {
  // Store hello
  char hello[] = "Hello";
  global_hello = hello;
}

void set_world_and_print_both() {
  // Store world
  char world[] = "World";
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
