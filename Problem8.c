//Problem 8 - Find the greatest product of five consecutive digits in the 1000-digit number.
//Doing this by reading the number from a text file :D
//Answer is consecutive sum is 46656

#include<stdio.h>

int atoi2(int c){
    
    //49 is charatcer value equivalent to 0
    return c-48;
}

void reshuffle(int arr[5], int num)
{
    int i;
    for (i=0; i<4; i++) {
        arr[i]= arr[i+1];
    }
    arr[4] = num;

}

int main (int argc, const char * argv[]) {
	
    char c;
    FILE *file;
    int n=0, loop=0;
    int prodof5 = 1;
    int maxprod = 1;
    int num=1, firstnum=0;
    int firstfive[5] = {0};
    int i=0;
    file = fopen("longnumber.txt", "r");
    //to open the file in read mode, right now file is in the same directory as this file is
    printf("opend file\n");

    if (file) {
        //initial set up
        for(i=0;i<5;i++)
        {
            if ((c = fgetc(file)) != EOF) {
                num = atoi2(c);
                firstfive[i] = num;
                prodof5 = prodof5 * num;
            }
            
        }
        maxprod = prodof5;
        while ((c = fgetc(file)) != EOF)
        {
            num = atoi2(c);
            if(num != 0){
              //  can improve a bit by checking if num==firstfive[0], in w/c case same result so can just continue in that case.
                    prodof5 = prodof5/firstfive[0];
                    prodof5 = prodof5 * num;
            if (maxprod < prodof5) {
                maxprod = prodof5;
                reshuffle(firstfive, num);
            }
            else{
                reshuffle(firstfive, num);
            }
            }
            //putchar(c);
        }
        fclose(file);
    }
    printf("consecutive sum is %d\n", maxprod);
	return 0;

}

