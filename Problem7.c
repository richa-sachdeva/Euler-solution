//Problem 7 - to find 10001 prime number, or to find nth prime number

#include<stdio.h>
#include<math.h>

int check_prime(long int a)
{
    int c;
    int counter = (int)sqrt(a);
    
    for ( c = 2 ; c <= counter; c++ )
    { 
        if ( a%c == 0 )
            return 0;
    }
   // if ( c == a )
        return 1;
}


int main (int argc, const char * argv[]) {

    long int nthprime;
    long int n = 3;
    long int i=0;
    int chk;
    printf("enter nth number: ");
    scanf("%ld", &nthprime);
    
    if(nthprime==1)
        printf("2");
    else if(nthprime==2)
        printf("3");
    else if(nthprime==3)
        printf("5");
    else{
        // while(n != nthprime){
       // printf("n is %ld, nth is %ld", n, nthprime);
        for(i=7;n<nthprime;i+=2){
            if( check_prime(i) == 1){
                n++;
              //  printf("prime number is %ld, at %ld", i, n);
                if(n==nthprime){break;}
                
            }
          //  printf("i: %ld, n: %ld", i, n);
            
        }
        printf("%ld prime number is  %ld \n", nthprime, i);
    } 

//    printf("%d",check_prime(nthprime));
    
    return 0;
}

   