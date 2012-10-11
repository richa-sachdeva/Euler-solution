//Problem 8 - Find the greatest product of five consecutive digits in the 1000-digit number.
//Doing this by reading the number from a text file :D

#include<stdio.h>

int main (int argc, const char * argv[]) {
	
    int c;
    FILE *file;
    file = fopen("reallylongnumber.txt", "r");
    printf("opend file");
    if (file) {
        while ((c = getc(file)) != EOF)
            putchar(c);
        fclose(file);
    }
	return 0;

}