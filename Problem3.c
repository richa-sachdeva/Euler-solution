//What is the largest prime factor of the number 600851475143 ?
#include <stdio.h>
#include <math.h>

int main (int argc, const char * argv[]) {
	
    long int reallylongnum = 600851475143;
    //can input the number as well
    long int largestprime = 1;
    int divisor = 5;
         if (reallylongnum%2 == 0) {
            largestprime = 2;
            reallylongnum/= 2;
        }
  
        if (reallylongnum%3 == 0) {
            largestprime = 3;
            reallylongnum/= 3;
        }
 
       
        while ( (reallylongnum > 5) ) {        
                 //check if divisor is prime or not
            divisor = nexthigherprimenumber(divisor);
            
            if (reallylongnum%divisor == 0) {
                largestprime = divisor;
                reallylongnum = reallylongnum/divisor;
            }
               divisor+= 2;
    }
    if (check_prime(reallylongnum) == 0) {
        if ((reallylongnum != 1) && (reallylongnum > largestprime)) {
            largestprime = reallylongnum;
        }
    }
    printf("the largest prime factor is %ld", largestprime);
    return 0;
}

int nexthigherprimenumber (int curr_prime){

    int nextprime = curr_prime;
    while (check_prime(nextprime) != 0){
        nextprime+= 2;    
    }
    return nextprime;
}

int check_prime(int a)
{
    int c;
    int counter = (int)sqrt(a);
    
    for ( c = 2 ; c <= counter; c++ )
    { 
        if ( a%c == 0 )
            return 0;
    }
    if ( c == a )
        return 1;
}
