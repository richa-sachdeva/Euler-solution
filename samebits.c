//Problem  - To find the next higher number with same number of bits

#include<stdio.h>

int main (int argc, const char * argv[]) {
	
    unsigned int num;
    int nexthigher;
    int ones;
    int ripple;
    int smallest;
    
    printf("enter unsigned number, i.e. a +ve number");
    scanf("%ud", &num);
    
    smallest = num & (-num);
    ripple = num + smallest;
    ones = num^ripple;
    ones = (ones >> 2)/smallest;
    nexthigher = ones | ripple;
    printf("higher number with same number of bits is: %d\n", nexthigher);
	return 0;

}