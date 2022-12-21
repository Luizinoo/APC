#include <stdio.h>
#include <math.h>

int main () {

   long long int t, t1, t2, t4, gm, raiz;
    
    scanf("%lld %lld", &t, &gm);

    for ( int i = 1; i <= gm; i++) {
        if ( t % 2 != 0 ) {
            raiz = sqrt(t);
            t1 = 2*raiz - 1;
            t2 = t1 * t1;
            t = t2;
            printf("\n%lld", t2);
        } else {
            raiz = sqrt(t);
            t4 = raiz / 2;
            t1 = 2*t4 - 1;
            t2 = t1 * t1;
            t = t2; 
            printf("\n%lld", t2);
        }
    }
    printf("\n");
}