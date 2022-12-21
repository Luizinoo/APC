#include<stdio.h>

int main (void) {

    int c, e, j, c1, e1, n;
    c1= -1;
    e1= -1;
    n = 1;

    while (scanf ( "%d", &j) !=  EOF){

        for ( int i = 0; i < j; i++){


            scanf("%d%d" , &c , &e);

            if ( e > e1){
                e1 = e;
                c1= c;

            }
        else if (( e1 == e ) && ( c < c1)) {
            c1 = c;
    
        }

    }
    printf(" dia %d\n" , n);
    printf ("%d\n", c1);
    printf("\n");
    c1 = -1;
    e1 = -1;
    ++n;

    }
}