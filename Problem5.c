//What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?

#include <stdio.h>

int main (int argc, const char * argv[]) {

    int n1,n2;
    int number = 1*2*3;
    int i=0;
    int lowerstart = 4;
    int upperlimit = 20;
    for(i=lowerstart; i<upperlimit; i++){ //can change upperlimit to whatever for generalised soln
        number = lcm (i, number);    
    }
    printf("final number %d \n", number);
    return 0;

}

int lcm( int m, int n)
{
    return( m * n / euclid (m , n)); // product of 2 numbers / gcd is lcm
}

int euclid(int a,int b)
{
    if(b==0)
        return a;
    else
        return euclid(b,a%b);
}