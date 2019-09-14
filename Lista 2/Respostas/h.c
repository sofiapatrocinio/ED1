#include <stdio.h>

int main(void){

    int sections,sum=0, sum_aux=0;

    scanf("%d", &sections);

    int N[sections];

    for(int i=1; i <= sections; i++){
        scanf("%d", &N[i]);
        sum += N[i];
    }

    for(int i=1; i <= sections; i++){
        sum_aux += N[i];
        if (sum_aux == (sum/2)){
            printf("%d\n", i);
        }
    }

    return 0;
}