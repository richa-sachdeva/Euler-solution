#include <stdio.h>

int main (int argc, const char * argv[]) {
	int c;
	while((c=getchar()) != '\n')
		putchar(c);
    return 0;
}
