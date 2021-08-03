#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int rand_num(int min, int max);

int main(){
    /* Intializes random number generator */
    /*time():return the system clock as a parameter*/
    srand( time(NULL) );

    int check[100] = {0};
    int x;
    int min, max;
    int amount;
    scanf("%d %d", &min, &max);
    scanf("%d", &amount);

    for(int i = 0; i < amount; ++i){
        do{
            x = rand_num(min, max);
        }while(check[x] == 1);
        check[x] = 1;
        printf("x = %d\n", x);
    }
    

}
/*uniform distribution*/
int rand_num(int min, int max){
    long long int secure_max;
    int n = max - min;
    if(n == RAND_MAX) return rand();

    /*make sure the edge of the uniform distribution*/
    else{
        if(n < 0) n *= (-1);
        n += 1;
        secure_max = RAND_MAX / n;
    }

    int y;
    do{
        y = rand();
    }while(y > secure_max);

    return (y  % n) + min;    
}


