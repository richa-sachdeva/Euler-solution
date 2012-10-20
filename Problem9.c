//There exists exactly one Pythagorean triplet for which a + b + c = 1000.
//Find the product abc.

#include<stdio.h>

int checkpyth(int i, int j, int k){
    
    int sum = (i*i)+(j*j);
    int sum1 = (k *k);
    
    return sum == sum1 ?  1 :  0; 
}

int main (int argc, const char * argv[]) {

    int i, j, k, sum, product=0;
    
    for (i=1; i<1000; i++) {
        for (j=1; j<1000; j++) {
            for (k=1; k<1000; k++) {
                if(i+j+k != 1000)
                    continue;
                else{
                    if(checkpyth(i,j,k)){
                        product = i*j*k;
                        printf("%d\t%d\t%d",i,j,k);
                        printf("\t%d\n",product);
                    }
                }
            }
        }
    }
    
    
    return 0;

}