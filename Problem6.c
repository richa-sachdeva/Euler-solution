//Problem 6

#include<stdio.h>

int main (int argc, const char * argv[]) {
    
    int diff;
    long int sumofsq=1;
    long int sqofsum;
    int upperlimit = 100;
    int sum;
    int i;
    for(i=2; i<=upperlimit; i++){
        sumofsq += (i*i);
    }
        
    sum = upperlimit*(upperlimit+1)/2;
    sqofsum = sum*sum;
    printf("sum of sq: %ld, sq of sum: %ld",sumofsq, sqofsum);
    printf("diff is: %ld", (sqofsum - sumofsq));
    
    return 0;

}