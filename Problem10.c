//Find the sum of all the primes below two million.
//can be further improved.

#include<stdio.h>
#include<math.h>

int checkprime (int n){

    int i=0;
    int limit = sqrt(n);
   // printf("limit = %d\n",limit);
    if (n%5 == 0) {
        return 0;
    }
    if (n%2 == 0){return 0;}
    for (i=3; i <= limit; i+=2) {
        
        if (n%i == 0) {
            return 0;
        }
    }
    return 1;
}

int main (int argc, const char * argv[]) {

    //2 million = 2 000 000
    long int sum = 2;
    int i = 0;
    int upperlimit = 2000000;
    int loopcount = 0;
    for (i = 3; i < upperlimit; i+=2) {
        
        if(checkprime(i) != 0){
            sum = sum + i;
            loopcount++;
        //    printf("i = %d \tsum = %ld\n", i, sum);
        }
    }
           printf("\n%ld %d\n", sum, loopcount);
    
    return 0;

}