#include <stdio.h>

int main(){
    /*
    Recamán's sequence:
        a(0) = 0;
        for n > 0, a(n) = a(n-1) - n if nonnegative and not already in the sequence, otherwise
        a(n) = a(n-1) + n
    */

    int maxi;

    printf("Recamán's sequence\nEnter the maximum amount of numbers to be shown: ");
    scanf("%d", &maxi);

    int seq[maxi];
    seq[0] = 0;
    printf("0 ");

    for(int i = 1; i <= maxi; i++){
        int a = seq[i - 1] - i;
        for(int l = 0; l < i; l++){
            if(a == seq[l] || a < 0){
                a = seq[i - 1] + i;
                break;
            }
        }
        seq[i] = a;
        printf("%d ", seq[i]);
    }

    return 0;
}
