#include <stdio.h>

int main(){
    int Sayi = 0;
    int i = 0;
    int Bolen = 0;
    char sonuc[10];

    printf("Sayi giriniz: ");
    scanf (" %d", &Sayi);

    nokta:
    i = i+1;

    if (Sayi%i == 0)
    {
        Bolen = Bolen + 1;
    }

    if (i<Sayi)
    {
        goto nokta;
    }

    if (Bolen==2)
    {
        printf("Sayiniz asaldir.");
    }

    else
    {
        printf("Sayiniz asal degildir.");
    }

}