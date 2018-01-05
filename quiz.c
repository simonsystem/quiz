#include <stdio.h>
char * global_hello;

void set_hello(){
	char hello[] = "Hello\r\n";
	global_hello = hello;
}
void print_hello(){
	char world[] = "World\r\n";
	puts(global_hello);
}

int main(void) {
	set_hello();
	print_hello();
	return 0;
}
