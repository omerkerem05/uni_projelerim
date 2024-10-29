#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    int harfSayisi;
    char a[9];
    char b[9];
    b[0] = '_';
    b[1] = '_';
    b[2] = '_';
    b[3] = '_';
    b[4] = '_';
    b[5] = '_';
    b[6] = '_';
    b[7] = '_';
    b[8] = '_';
    char c[9];
    char hmikmi, tahminH;
    char tahminK[9];
    int hak = 10;
    bool bildimi = true;

baslangic:

    printf("\nGireceginiz kelimenin harf sayisini yaziniz(5,6,7,8,9): ");
    scanf(" %d", &harfSayisi);

    if (harfSayisi == 5)
    {
        printf("\nKelimeyi giriniz: ");
        scanf(" %c%c%c%c%c", &a[0], &a[1], &a[2], &a[3], &a[4]);
        printf("\nHak sayisini giriniz: ");
        scanf(" %d", &hak);
        printf("\n\n\n\n\n\n\n\n\n\n\n");

        while (hak > 0)
        {
            bildimi = true;
            printf("\n%c %c %c %c %c     Kalan hak: %d", b[0], b[1], b[2], b[3], b[4], hak);
            printf("\n\nHarf tahmini icin h kelime tahmini icin k yaziniz: ");
            scanf(" %c", &hmikmi);
            if (hmikmi == 'h')
            {
                printf("\n\nHarf tahmininizi yapiniz: ");
                scanf(" %c", &tahminH);
                for (int i = 0; i <= 4; i++)
                {
                    if (tahminH == a[i])
                    {
                        b[i] = tahminH;
                    }
                }
                for (int i = 0; i <= 4; i++)
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
                printf("\n%c %c %c %c %c     Kalan hak: %d", b[0], b[1], b[2], b[3], b[4], hak);
                printf("\n\nTebrikler! \"%c%c%c%c%c\" kelimesini bildiniz!\n\n", a[0], a[1], a[2], a[3], a[4]);
                break;
            }
            else if (hmikmi == 'k')
            {
                printf("\n\nKelime tahmininizi yapiniz: ");
                scanf(" %c%c%c%c%c", &c[0], &c[1], &c[2], &c[3], &c[4]);
                for (int i = 0; i <= 4; i++)
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
                printf("\nTebrikler! \"%c%c%c%c%c\" kelimesini bildiniz!\n\n", a[0], a[1], a[2], a[3], a[4]);
                break;
            }
            else
            {
                printf("\nh ya da k yazmak ne kadar zor olabilir?\n\n");
            }
        }
        if (hak == 0 && bildimi == false)
        {
            printf("\n%c %c %c %c %c     Kalan hak: %d", b[0], b[1], b[2], b[3], b[4], hak);
            printf("\n\nMaalesef bilemediniz. Kelime: %c%c%c%c%c\n\n", a[0], a[1], a[2], a[3], a[4]);
        }
    }

    else if (harfSayisi == 6)
    {
        printf("\nKelimeyi giriniz: ");
        scanf(" %c%c%c%c%c%c", &a[0], &a[1], &a[2], &a[3], &a[4], &a[5]);
        printf("\nHak sayisini giriniz: ");
        scanf(" %d", &hak);
        printf("\n\n\n\n\n\n\n\n\n\n\n");

        while (hak > 0)
        {
            bildimi = true;
            printf("\n%c %c %c %c %c %c     Kalan hak: %d", b[0], b[1], b[2], b[3], b[4], b[5], hak);
            printf("\n\nHarf tahmini icin h kelime tahmini icin k yaziniz: ");
            scanf(" %c", &hmikmi);
            if (hmikmi == 'h')
            {
                printf("\n\nHarf tahmininizi yapiniz: ");
                scanf(" %c", &tahminH);
                for (int i = 0; i <= 5; i++)
                {
                    if (tahminH == a[i])
                    {
                        b[i] = tahminH;
                    }
                }
                for (int i = 0; i <= 5; i++)
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
                printf("\n%c %c %c %c %c %c     Kalan hak: %d", b[0], b[1], b[2], b[3], b[4], b[5], hak);
                printf("\n\nTebrikler! \"%c%c%c%c%c%c\" kelimesini bildiniz!\n\n", a[0], a[1], a[2], a[3], a[4], a[5]);
                break;
            }
            else if (hmikmi == 'k')
            {
                printf("\n\nKelime tahmininizi yapiniz: ");
                scanf(" %c%c%c%c%c%c", &c[0], &c[1], &c[2], &c[3], &c[4], &c[5]);
                for (int i = 0; i <= 5; i++)
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
                printf("\nTebrikler! \"%c%c%c%c%c%c\" kelimesini bildiniz!\n\n", a[0], a[1], a[2], a[3], a[4], a[5]);
                break;
            }
            else
            {
                printf("\nh ya da k yazmak ne kadar zor olabilir?\n\n");
            }
        }
        if (hak == 0 && bildimi == false)
        {
            printf("\n%c %c %c %c %c %c     Kalan hak: %d", b[0], b[1], b[2], b[3], b[4], b[5], hak);
            printf("\n\nMaalesef bilemediniz. Kelime: %c%c%c%c%c%c\n\n", a[0], a[1], a[2], a[3], a[4], a[5]);
        }
    }
    else if (harfSayisi == 7)
    {
        printf("\nKelimeyi giriniz: ");
        scanf(" %c%c%c%c%c%c%c", &a[0], &a[1], &a[2], &a[3], &a[4], &a[5], &a[6]);
        printf("\nHak sayisini giriniz: ");
        scanf(" %d", &hak);
        printf("\n\n\n\n\n\n\n\n\n\n\n");

        while (hak > 0)
        {
            bildimi = true;
            printf("\n%c %c %c %c %c %c %c     Kalan hak: %d", b[0], b[1], b[2], b[3], b[4], b[5], b[6], hak);
            printf("\n\nHarf tahmini icin h kelime tahmini icin k yaziniz: ");
            scanf(" %c", &hmikmi);
            if (hmikmi == 'h')
            {
                printf("\n\nHarf tahmininizi yapiniz: ");
                scanf(" %c", &tahminH);
                for (int i = 0; i <= 6; i++)
                {
                    if (tahminH == a[i])
                    {
                        b[i] = tahminH;
                    }
                }
                for (int i = 0; i <= 6; i++)
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
                printf("\n%c %c %c %c %c %c %c     Kalan hak: %d", b[0], b[1], b[2], b[3], b[4], b[5], b[6], hak);
                printf("\n\nTebrikler! \"%c%c%c%c%c%c%c\" kelimesini bildiniz!\n\n", a[0], a[1], a[2], a[3], a[4], a[5], a[6]);
                break;
            }
            else if (hmikmi == 'k')
            {
                printf("\n\nKelime tahmininizi yapiniz: ");
                scanf(" %c%c%c%c%c%c%c", &c[0], &c[1], &c[2], &c[3], &c[4], &c[5], &c[6]);
                for (int i = 0; i <= 6; i++)
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
                printf("\nTebrikler! \"%c%c%c%c%c%c%c\" kelimesini bildiniz!\n\n", a[0], a[1], a[2], a[3], a[4], a[5], a[6]);
                break;
            }
            else
            {
                printf("\nh ya da k yazmak ne kadar zor olabilir?\n\n");
            }
        }
        if (hak == 0 && bildimi == false)
        {
            printf("\n%c %c %c %c %c %c %c     Kalan hak: %d", b[0], b[1], b[2], b[3], b[4], b[5], b[6], hak);
            printf("\n\nMaalesef bilemediniz. Kelime: %c%c%c%c%c%c%c\n\n", a[0], a[1], a[2], a[3], a[4], a[5], a[6]);
        }
    }
    else if (harfSayisi == 8)
    {
        printf("\nKelimeyi giriniz: ");
        scanf(" %c%c%c%c%c%c%c%c", &a[0], &a[1], &a[2], &a[3], &a[4], &a[5], &a[6], &a[7]);
        printf("\nHak sayisini giriniz: ");
        scanf(" %d", &hak);
        printf("\n\n\n\n\n\n\n\n\n\n\n");

        while (hak > 0)
        {
            bildimi = true;
            printf("\n%c %c %c %c %c %c %c %c     Kalan hak: %d", b[0], b[1], b[2], b[3], b[4], b[5], b[6], b[7], hak);
            printf("\n\nHarf tahmini icin h kelime tahmini icin k yaziniz: ");
            scanf(" %c", &hmikmi);
            if (hmikmi == 'h')
            {
                printf("\n\nHarf tahmininizi yapiniz: ");
                scanf(" %c", &tahminH);
                for (int i = 0; i <= 7; i++)
                {
                    if (tahminH == a[i])
                    {
                        b[i] = tahminH;
                    }
                }
                for (int i = 0; i <= 7; i++)
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
                printf("\n%c %c %c %c %c %c %c %c     Kalan hak: %d", b[0], b[1], b[2], b[3], b[4], b[5], b[6], b[7], hak);
                printf("\n\nTebrikler! \"%c%c%c%c%c%c%c%c\" kelimesini bildiniz!\n\n", a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7]);
                break;
            }
            else if (hmikmi == 'k')
            {
                printf("\n\nKelime tahmininizi yapiniz: ");
                scanf(" %c%c%c%c%c%c%c%c", &c[0], &c[1], &c[2], &c[3], &c[4], &c[5], &c[6], &c[7]);
                for (int i = 0; i <= 7; i++)
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
                printf("\nTebrikler! \"%c%c%c%c%c%c%c%c\" kelimesini bildiniz!\n\n", a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7]);
                break;
            }
            else
            {
                printf("\nh ya da k yazmak ne kadar zor olabilir?\n\n");
            }
        }
        if (hak == 0 && bildimi == false)
        {
            printf("\n%c %c %c %c %c %c %c %c     Kalan hak: %d", b[0], b[1], b[2], b[3], b[4], b[5], b[6], b[7], hak);
            printf("\n\nMaalesef bilemediniz. Kelime: %c%c%c%c%c%c%c%c\n\n", a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7]);
        }
    }
    else if (harfSayisi == 9)
    {
        printf("\nKelimeyi giriniz: ");
        scanf(" %c%c%c%c%c%c%c%c%c", &a[0], &a[1], &a[2], &a[3], &a[4], &a[5], &a[6], &a[7], &a[8]);
        printf("\nHak sayisini giriniz: ");
        scanf(" %d", &hak);
        printf("\n\n\n\n\n\n\n\n\n\n\n");

        while (hak > 0)
        {
            bildimi = true;
            printf("\n%c %c %c %c %c %c %c %c %c     Kalan hak: %d", b[0], b[1], b[2], b[3], b[4], b[5], b[6], b[7], b[8], hak);
            printf("\n\nHarf tahmini icin h kelime tahmini icin k yaziniz: ");
            scanf(" %c", &hmikmi);
            if (hmikmi == 'h')
            {
                printf("\n\nHarf tahmininizi yapiniz: ");
                scanf(" %c", &tahminH);
                for (int i = 0; i <= 8; i++)
                {
                    if (tahminH == a[i])
                    {
                        b[i] = tahminH;
                    }
                }
                for (int i = 0; i <= 8; i++)
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
                printf("\n%c %c %c %c %c %c %c %c %c     Kalan hak: %d", b[0], b[1], b[2], b[3], b[4], b[5], b[6], b[7], b[8], hak);
                printf("\n\nTebrikler! \"%c%c%c%c%c%c%c%c%c\" kelimesini bildiniz!\n\n", a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8]);
                break;
            }
            else if (hmikmi == 'k')
            {
                printf("\n\nKelime tahmininizi yapiniz: ");
                scanf(" %c%c%c%c%c%c%c%c%c", &c[0], &c[1], &c[2], &c[3], &c[4], &c[5], &c[6], &c[7], &c[8]);
                for (int i = 0; i <= 8; i++)
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
                printf("\nTebrikler! \"%c%c%c%c%c%c%c%c%c\" kelimesini bildiniz!\n\n", a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8]);
                break;
            }
            else
            {
                printf("\nh ya da k yazmak ne kadar zor olabilir?\n\n");
            }
        }
        if (hak == 0 && bildimi == false)
        {
            printf("\n%c %c %c %c %c %c %c %c %c     Kalan hak: %d", b[0], b[1], b[2], b[3], b[4], b[5], b[6], b[7], b[8], hak);
            printf("\n\nMaalesef bilemediniz. Kelime: %c%c%c%c%c%c%c%c%c\n\n", a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8]);
        }
    }
    else
    {
        printf("\nGecerli bir sayi giriniz.");
        goto baslangic;
    }

    return 0;
}