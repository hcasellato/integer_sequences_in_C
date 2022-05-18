#include <stdio.h>

int main(){
    /*
    Recamán's sequence:
        a(0) = 0;
        for n > 0, a(n) = a(n-1) - n if nonnegative and not already in the sequence, otherwise
        a(n) = a(n-1) + n
    */

    int maxi;

    printf("Recamán's sequence\nEnter the maximum amount of numbers shown: ");
    scanf("%d", &maxi);

    int seq[maxi];
    seq[0] = 0;

    for(i = 1; i <= maxi; i++){



    }


    return 0;
}
