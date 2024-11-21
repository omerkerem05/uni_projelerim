#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    int harfSayisi;
    char a[15];
    char b[15] = {"_______________"};
    char c[15];
    char hmikmi, tahminH;
    char tahminK[15];
    int hak = 10;
    bool bildimi = true;

    printf("\nKelimeyi giriniz: ");
    scanf(" %s", &a);
    harfSayisi = strlen(a);
    printf("\nHak sayisini giriniz: ");
    scanf(" %d", &hak);
    printf("\n\n\n\n\n\n\n\n\n\n\n");

    while (hak > 0)
    {
        bildimi = true;
        printf("\n");
        for (int i = 0; i < harfSayisi; i++)
        {
            printf("%c ", b[i]);
        }
        printf("    Kalan hak: %d", hak);
        printf("\n\nHarf tahmini icin h kelime tahmini icin k yaziniz: ");
        scanf(" %c", &hmikmi);
        if (hmikmi == 'h')
        {
            printf("\n\nHarf tahmininizi yapiniz: ");
            scanf(" %c", &tahminH);
            for (int i = 0; i < harfSayisi; i++)
            {
                if (tahminH == a[i])
                {
                    b[i] = tahminH;
                }
            }
            for (int i = 0; i < harfSayisi; i++)
            {
                if (b[i] != a[i])
                {
                    bildimi = false;
                    break;
                }
            }
            if (!bildimi)
            {
                hak--;
                continue;
            }
            hak--;
            for (int i = 0; i < harfSayisi; i++)
            {
                printf("%c ", b[i]);
            }
            printf("    Kalan hak: %d", hak);
            printf("\n\nTebrikler! \"%s\" kelimesini bildiniz!\n\n", a);
            break;
        }
        else if (hmikmi == 'k')
        {
            printf("\n\nKelime tahmininizi yapiniz: ");
            scanf(" %s", &c);
            for (int i = 0; i < harfSayisi; i++)
            {
                if (c[i] != a[i])
                {
                    printf("\nYanlis tahmin.\n");
                    hak--;
                    bildimi = false;
                    break;
                }
            }
            if (!bildimi)
            {
                continue;
            }
            printf("\nTebrikler! \"%s\" kelimesini bildiniz!\n\n", a);
            break;
        }
        else
        {
            printf("\nh ya da k yazmak ne kadar zor olabilir?\n\n");
        }
    }
    if (hak == 0 && bildimi == false)
    {
        printf("\n");
        for (int i = 0; i < harfSayisi; i++)
        {
            printf("%c ", b[i]);
        }
        printf("    Kalan hak: %d", hak);
        printf("\n\nMaalesef bilemediniz. Kelime: %s\n\n", a);
    }

    return 0;
}