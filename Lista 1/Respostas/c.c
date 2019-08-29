#include <stdio.h>
#include <math.h>

int main(void)
{
    int birth_day, birth_month, birth_year;
    int today_day, today_month, today_year;

    scanf ("%02d %02d %04d", &birth_day, &birth_month, &birth_year);
    scanf ("%02d %02d %04d", &today_day, &today_month, &today_year);
    
    if (birth_day <= 35 && birth_day >= 1 && birth_month <= 15 && birth_month >= 1 && birth_year <= 9999 && birth_year >= 0 && 
    today_day <= 35 && today_day >= 1 && today_month <= 15 && today_month >= 1 && today_year <= 9999 && today_year >= 0) {
       if (birth_day <= 31 && birth_month <= 12 && today_day <= 31 && today_month <= 12) {

        int all_birthday = birth_day + (birth_month*31) + (birth_year*372);
        int all_today = today_day + (today_month*31) + (today_year*372);

        int dif = all_today - all_birthday;
        int years_old = dif/372;
        int rest = dif % 372;
        int mounth_old = rest / 31;
        int day_old = rest % 31;

        printf("%d\n%d\n%d\n", years_old, mounth_old, day_old);
       }
       else {
           printf("data invalida\n");
       }
    }
    else {
        printf("Insira um número entre dia: 1-35\n Mês: 0-15\n Ano: 0-9999\n");
    }

    return 0;
}