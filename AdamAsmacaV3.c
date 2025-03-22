#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void main()
{
    char* kelimeler[20] = {"kalem", "asker", "anahtar", "bilgisayar", "ananas", "terazi", "beyaz",
    "korsan", "sucuk", "ordu", "kedi", "zeytin", "kestane", "kuyruk", "destan", "kertenkele",
    "madalyon", "gardiyan", "pelikan", "ninja"};

    srand(time(0));

    char* cevap = kelimeler[rand() % 20];
    char sonuc[strlen(cevap)+1];
    int hak = strlen(cevap)*2;
    char* tahmin = (char*)malloc(20*sizeof(char));

    for (int i = 0; i < strlen(cevap); i++)
    {
        sonuc[i] = '_';
    }
    sonuc[strlen(cevap)] = '\0';

    while (hak > 0)
    {
        printf("%s", sonuc);
        printf("    Kalan hak: %d", hak);
        printf("\nTahmininiz: ");
        scanf("%s", tahmin);

        if (strlen(tahmin) == 1)
        {
            for (int i = 0; i < strlen(cevap); i++)
            {
                if (tahmin[0] == cevap[i])
                {
                    sonuc[i] = tahmin[0];
                }
            }
        }

        hak--;

        if (strcmp(sonuc, cevap) == 0 || strcmp(tahmin, cevap) == 0)
        {
            printf("\nTebrikler!\n%s kelimesini dogru bildiniz!", cevap);
            break;
        }
    }

    if (strcmp(sonuc, cevap) != 0 && strcmp(tahmin, cevap) != 0)
    {
        printf("\nMaalesef bilemediniz.\nCevap: %s", cevap);
        free(tahmin);
    }
}