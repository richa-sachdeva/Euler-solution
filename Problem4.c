//Find the largest palindrome made from the product of two 3-digit numbers.

#include <stdio.h>

int main (int argc, const char * argv[]) {

    //to calculate the palindrome
    enum { A=100000, B=10000, C=1000, c=100, b=10, a=1, T=10 };
    int palinnum =  0;
    int previouspalinnum = 111111, r=143, s=777; /*previouspalinnum = r*s*/
    int outerloop=0, innerloop = 0;
    int innerlowlimit, innerhighlimit, innerdelete;    
    int inner=0, n11=(999/11)*11;
    
    for(outerloop = 999; outerloop > 100; outerloop--)
    {
        innerhighlimit = n11;  innerdelete = 11;
        if (outerloop%11==0) {
            innerhighlimit = 999;  innerdelete = 1;
        }
        innerlowlimit= previouspalinnum/outerloop-1;
        if (innerlowlimit < outerloop) innerlowlimit = outerloop-1;
        
        for(innerloop = innerhighlimit; innerloop>innerlowlimit; innerloop -= innerdelete)
        {
            
            palinnum = outerloop * innerloop;
            if (palinnum%T==palinnum/A && (palinnum/B)%T==(palinnum/b)%T && (palinnum/C)%T==(palinnum/c)%T) {
                previouspalinnum=palinnum; r=outerloop; s=innerloop;
                printf ("%d at %d * %d\n", previouspalinnum, r, s);
                break;          // We're done with this value of m
            }
            //now check if this is palindrome or now
        }
    }
    return 0;
}