#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <unistd.h>
int main () {
int castka=9420;
int pocet_5000=castka/5000; 
    castka=castka-pocet_5000*5000;
int pocet_2000=castka/2000;
    castka=castka-pocet_2000*2000;
int pocet_1000=castka/1000;
    castka=castka-pocet_1000*1000;
int pocet_500=castka/500;
    castka=castka-pocet_500*500;
int pocet_200=castka/200;
    castka=castka-pocet_200*200;
int pocet_100=castka/100;
    castka=castka-pocet_100*100;
    printf("Bankovky 5000: %d\n",pocet_5000);
    printf("Bankovky 2000: %d\n", pocet_2000);
    printf("Bankovky 1000: %d\n", pocet_1000);
    printf("Bankovky 500: %d\n", pocet_500);
    printf("Bankovky 200:%d\n", pocet_200);
    printf("Bankovky 100: %d\n", pocet_100);
return 0;
}
