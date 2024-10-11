#include <stdio.h>

int main(){
    int sayi = 1;
    int i;
    int toplam;

    nokta2:
    i = 0;
    toplam = 0;
    sayi = sayi + 1;
    nokta:
    i = i + 1;

    if (sayi%i == 0)
    {
        toplam = toplam + i;
    }

    if (i<sayi-1)
    {
        goto nokta;
    }

    if (toplam == sayi)
    {
        printf("%d\n", sayi);
    }

    if (sayi < 99)
    {
        goto nokta2;
    }
    
    return 0;
}